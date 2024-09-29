// 3. Write a program to create an array for 10 players. For each player store name, no. of matches played, runs, wickets takes.
// a. Create function to Accept the information of each player.
// b. Create function to display the information of all the players
// c. Display the information of player who made maximum runs and the one who took maximum number of wickets.

#include <stdio.h>
#include <string.h>
typedef struct Player
{
    char name[20];
    int noOfMatchesPlayed;
    int runs;
    int wickets;
} Player;

// Accepting Information Of Each Player
void storePlayer(Player *player)
{
    printf("\nEnter Player Name :");
    // gets(player->name);
    scanf("%s", player->name);
    printf("\nEnter No of Matches Played :");
    scanf("%d", &player->noOfMatchesPlayed);
    printf("\nEnter No of Runs :");
    scanf("%d", &player->runs);
    printf("\nEnter No of Wickets :");
    scanf("%d", &player->wickets);
}
// Accept Multiple players
void storePlayers(Player *player, int noOfPlayers, int *ind)
{
    for (int i = 0; i < noOfPlayers; i++, (*ind) = (*ind) + 1)
    {
        printf("\n-------------------------------------------: Payer %d :-------------------------------------------------", (*ind) + 1);
        storePlayer(&player[*ind]);
    }
}
// Display One Player
void displayOnePlayer(Player *player)
{
    printf("\nName :%s", player->name);
    printf("\nMatches Played :%d", player->noOfMatchesPlayed);
    printf("\nTotal Runs : %d", player->runs);
    printf("\nTotal Wickets :%d ", player->wickets);
}
// Display All Players
void displayAllPlayers(Player *player, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n-----------------------------------------: Payer %d :------------------------------------------------", i + 1);
        displayOnePlayer(&player[i]);
    }
}
// Maximum Runs
int maxRuns(Player *player, int size)
{
    int maxInd = 0;
    int max = player[maxInd].runs;
    for (int i = 1; i < size; i++)
    {
        if (max < player[i].runs)
        {
            max = player[i].runs;
            maxInd = i;
        }
    }
    return maxInd;
}
// Max Wickets
int maxWickets(Player *player, int size)
{
    int maxInd = 0;
    int max = player[maxInd].wickets;
    for (int i = 1; i < size; i++)
    {
        if (max < player[i].wickets)
        {
            max = player[i].wickets;
            maxInd = i;
        }
    }
    return maxInd;
}

int showMenu()
{
    int ch;
    printf("\n\n---------------------------------------------------------------------------------------------------------");
    printf("\n--------------------------------------------: Player :---------------------------------------------------");
    printf("\n\t                            \tEnter Your Choice \n\n1) Add Players          \t 2)  Display All Players \n3) Display Player With maximum Runs \t 4) Display Player With maximum Wickets \n : ");
    scanf("%d", &ch);
    printf("\n--------------------------------------------------------------------------------------------------------\n");
    return ch;
}

void main()
{
    int index = 0, ch, noOfplayers;
    Player player[10];
    do
    {
        ch = showMenu();
        switch (ch)
        {
        case 1:
            printf("\n-----------------------------------------: Add Players :------------------------------------------------");
            printf("\nHow Many players do you want to add (1-10):");
            scanf("%d", &noOfplayers);
            storePlayers(player, noOfplayers, &index);
            break;
        case 2:
            displayAllPlayers(player, index);
            break;
        case 3:
            printf("\n-------------------------------------: Players With max Runs :-------------------------------------------");
            int indR = maxRuns(player, index);
            displayOnePlayer(&player[indR]);
            break;
        case 4:
            printf("\n-----------------------------------: Players With max Wickets :------------------------------------------");
            int indW = maxWickets(player, index);
            displayOnePlayer(&player[indW]);
            break;
        // case 5:
        //     break;
        case 0:
            printf("\nExiting..................................");
            printf("\n--------------------------------------------------------------------------------------------------------\n");
            break;
        default:
            printf("\nInvalid Choice....!");
            break;
        }
    } while (ch != 0);
}