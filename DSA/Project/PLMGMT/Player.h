#pragma once

#include <string>
#include <iostream>
using namespace std;

class Player {
private:
    int jerseyNumber;
    string playerName;
    int runs;
    int wickets;
    int matchesPlayed;

public:
    Player(int , string &, int , int , int );

    int getJerseyNumber();
    string getName();
    int getRuns();
    int getWickets();
    int getMatchesPlayed();

    void setRuns(int );
    void setWickets(int );
    void setMatchesPlayed(int );

    void display();

    friend ostream& operator<<(ostream& os, const Player& player);
};
