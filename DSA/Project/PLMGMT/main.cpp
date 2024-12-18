#include "PlayerMgt.h"
#include <iostream>
using namespace std;

int main() {
    PlayerMgt management;
    int choice;

    while (true) {
        cout << "\n1. Add Player\n2. Remove Player\n3. Search Player by Jersey Number\n4. Search Player by Name\n"
             << "5. Update Player Data\n6. Display All Players\n7. Display Sorted by Runs\n8. Display Sorted by Wickets\n"
             << "0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 0) break;

        int jerseyNumber, runs, wickets, matchesPlayed;
        string name;

        switch (choice) {
        case 1:
            cout << "Enter Jersey Number, Name, Runs, Wickets, Matches Played: ";
            cin >> jerseyNumber >> name >> runs >> wickets >> matchesPlayed;
            management.addPlayer(Player(jerseyNumber, name, runs, wickets, matchesPlayed));
            break;

        case 2:
            cout << "Enter Jersey Number: ";
            cin >> jerseyNumber;
            management.removePlayer(jerseyNumber);
            break;

        case 3:
            cout << "Enter Jersey Number: ";
            cin >> jerseyNumber;
            if (Player* player = management.searchPlayerByJersey(jerseyNumber)) {
                player->display();
            } else {
                cout << "Player not found!\n";
            }
            break;

        case 4:
            cout << "Enter Name: ";
            cin >> name;
            if (Player* player = management.searchPlayerByName(name)) {
                player->display();
            } else {
                cout << "Player not found!\n";
            }
            break;

        case 5:
            cout << "Enter Jersey Number, New Runs, New Wickets, New Matches Played: ";
            cin >> jerseyNumber >> runs >> wickets >> matchesPlayed;
            management.updatePlayerData(jerseyNumber, runs, wickets, matchesPlayed);
            break;

        case 6:
            management.displayAllPlayers();
            break;

        case 7:
            management.displaySortedPlayersByRuns(false); // Descending order
            break;

        case 8:
            management.displaySortedPlayersByWickets(false); // Descending order
            break;

        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
