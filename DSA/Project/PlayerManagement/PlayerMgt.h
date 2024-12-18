#ifndef PLAYERMGT_H
#define PLAYERMGT_H
#include "Player.cpp"
#include "LinkedList.cpp"
#include <iostream>
using namespace std;
#pragma once

class PlayerMgt {
private:
    LinkedList<Player> players;

public:
    void addPlayer(const Player& player);
    void removePlayer(int jerseyNumber);
    Player* searchPlayerByJersey(int jerseyNumber);
    Player* searchPlayerByName(const string& name);
    void updatePlayerData(int jerseyNumber, int runs, int wickets, int matchesPlayed);
    void displaySortedPlayersByRuns(bool ascending);
    void displaySortedPlayersByWickets(bool ascending);
    void displayAllPlayers() ;
};

#endif
