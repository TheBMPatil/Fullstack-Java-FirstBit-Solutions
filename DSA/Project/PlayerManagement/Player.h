#include <bits/stdc++.h>
using namespace std;
#pragma once
class Player
{
private:
    int jerseyNumber;
    string playerName;
    int runs;
    int wickets;
    int matchesPlayed;

public:
    Player();
    Player(int jerseyNumber,   string &name, int runs, int wickets, int matchesPlayed);

    // Getters
    int getJerseyNumber() ;
    string getName()  ;
    int getRuns()  ;
    int getWickets()  ;
    int getMatchesPlayed()  ;

    // Setters
    void setRuns(int runs);
    void setWickets(int wickets);
    void setMatchesPlayed(int matchesPlayed);
friend ostream& operator<<(ostream& os, const Player& player);
    // Display function
    void display()  ;
    ~Player();
};
