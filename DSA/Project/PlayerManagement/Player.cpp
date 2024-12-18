#include "Player.h"
#include <iostream>
using namespace std;

Player::Player() : jerseyNumber(0), runs(0), wickets(0), matchesPlayed(0) {}

Player::Player(int jerseyNumber, string &name, int runs, int wickets, int matchesPlayed)
{
}

int Player::getJerseyNumber() { return jerseyNumber; }
string Player::getName() { return playerName; }
int Player::getRuns() { return runs; }
int Player::getWickets() { return wickets; }
int Player::getMatchesPlayed() { return matchesPlayed; }

void Player::setRuns(int runs) { this->runs = runs; }
void Player::setWickets(int wickets) { this->wickets = wickets; }
void Player::setMatchesPlayed(int matchesPlayed) { this->matchesPlayed = matchesPlayed; }

void Player::display()
{
    cout << "Jersey Number: " << jerseyNumber
         << ", Name: " << playerName
         << ", Runs: " << runs
         << ", Wickets: " << wickets
         << ", Matches Played: " << matchesPlayed << endl;
}
ostream& operator<<(ostream& os, const Player& player)
{
    os << "Jersey Number: " << player.jerseyNumber
       << ", Name: " << player.playerName
       << ", Runs: " << player.runs
       << ", Wickets: " << player.wickets
       << ", Matches Played: " << player.matchesPlayed;
    return os;
}