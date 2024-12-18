#pragma once
#include "Player.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;


class PlayerMgt {

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

