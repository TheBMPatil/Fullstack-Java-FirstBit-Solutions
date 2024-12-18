#include "PlayerMgt.h"

void PlayerMgt::addPlayer(const Player &player)
{
    players.add(player);
}

void PlayerMgt::removePlayer(int jerseyNumber)
{
    Node<Player>* temp = players.getHead();
    Node<Player>* prev = nullptr;

    while (temp)
    {
        if (temp->getData().getJerseyNumber() == jerseyNumber)
        {
            // If the node to be removed is the head node
            if (!prev)
            {
                players.setHead(temp->getNext()); // Move head to next node
            }
            else
            {
                prev->setNext(temp->getNext()); // Bypass the node to remove it
            }
            delete temp;  // Delete the node
            return;
        }
        prev = temp;        // Move prev to current node
        temp = temp->getNext(); // Move temp to next node
    }
}


Player* PlayerMgt::searchPlayerByJersey(int jerseyNumber)
{
    Node<Player>* temp = players.getHead();
    while (temp)
    {
        if (temp->getData().getJerseyNumber() == jerseyNumber)  // Corrected line
        {
            return &temp->getData();
        }
        temp = temp->getNext();
    }
    return nullptr;
}


Player *PlayerMgt::searchPlayerByName(const string &name)
{
    Node<Player> *temp = players.getHead();
    while (temp)
    {
        if (temp->getData().getName() == name)
        {
            return &temp->getData();
        }
        temp = temp->getNext();
    }
    return nullptr;
}

void PlayerMgt::updatePlayerData(int jerseyNumber, int runs, int wickets, int matchesPlayed)
{
    Player *player = searchPlayerByJersey(jerseyNumber);
    if (player)
    {
        player->setRuns(runs);
        player->setWickets(wickets);
        player->setMatchesPlayed(matchesPlayed);
    }
}

void PlayerMgt::displaySortedPlayersByRuns(bool ascending)
{
    // Sort players by runs
    Node<Player> *temp = players.getHead();
    if (!temp)
        return;

    bool swapped;
    do
    {
        swapped = false;
        while (temp->getNext())
        {
            if ((ascending && temp->getData().getRuns() > temp->getNext()->getData().getRuns()) ||
                (!ascending && temp->getData().getRuns() < temp->getNext()->getData().getRuns()))
            {
                Node<Player> *swpaer = temp;
                temp = temp->getNext();
                temp->setNext(swpaer);
                swapped = true;
            }
            temp = temp->getNext();
        }
    } while (swapped);

    players.display();
}

void PlayerMgt::displaySortedPlayersByWickets(bool ascending)
{
    // Sort players by wickets
    Node<Player> *temp = players.getHead();
    if (!temp)
        return;

    bool swapped;
    do
    {
        swapped = false;
        while (temp->getNext())
        {
            if ((ascending && temp->getData().getWickets() > temp->getNext()->getData().getWickets()) ||
                (!ascending && temp->getData().getWickets() < temp->getNext()->getData().getWickets()))
            {
                Node<Player> *swpaer = temp;
                temp = temp->getNext();
                temp->setNext(swpaer);
                swapped = true;
            }
            temp = temp->getNext();
        }
    } while (swapped);

    players.display();
}

void PlayerMgt::displayAllPlayers() 
{
    players.display();
}
