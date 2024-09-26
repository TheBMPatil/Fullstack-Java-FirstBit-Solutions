#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showMenu();

int size = 10;
int PlayerIndex = 0;

typedef struct Player
{
    int jerseyNumber;
    char playerName[50];
    int runs;
    int wickets;
    int matchesPlayed;

} Player;

void hardCodedPlayers(Player *);

Player *addPlayer(Player *p, int PlayerQuantity)
{
    printf("\nAdding Players");
    if (size - PlayerIndex <= PlayerQuantity)
    {
        size = (2 * size) + PlayerQuantity;
        Player *temp = (Player *)realloc(p, sizeof(Player) * size);
        // printf("\nReallocating");
        if (temp == NULL)
        {
            printf("\nReallocation Failed");
            return p;
        }
        else
        {
            p = temp;
            // printf("\nReallocated");
            addPlayerHelper(p, PlayerQuantity);
            return p;
        }
    }
    else if (size > PlayerQuantity && PlayerIndex < size)
    {
        // printf("\n Without reallocating");
        addPlayerHelper(p, PlayerQuantity);
        return p;
    }
}

void addPlayerHelper(Player *p, int PlayerQuantity)
{
    for (int i = 0; i < PlayerQuantity; i++, PlayerIndex++)
    {
        printf("\nEnter Player %d Data", PlayerIndex + 1);
        printf("\nEnter Player Name :");
        fflush(stdin);
        gets(p[PlayerIndex].playerName);
        printf("\nEnter Player jerseyNumber :");
        scanf("%d", &p[PlayerIndex].jerseyNumber);
        printf("\nEnter Player runs :");
        scanf("%d", &p[PlayerIndex].runs);
        printf("\nEnter No of wickets  :");
        scanf("%d", &p[PlayerIndex].wickets);
    }
}

void displayPlayers(Player *p)
{
    printf("\nAll Players are ");

    for (int i = 0; i < PlayerIndex; i++)
    {
        printf("\nPlayer Name :%s", p[i].playerName);
        printf("\nPlayer jerseyNumber :%d", p[i].jerseyNumber);
        printf("\nPlayer runs :%d", p[i].runs);
        printf("\nPlayer wickets :%d", p[i].wickets);
        printf("\nPlayer matchesPlayed :%d", p[i].matchesPlayed);
    }
}

void displayTop3(Player *p)
{
    printf("\nTop 3 Players are ");

    for (int i = 0; i < 3; i++)
    {
        printf("\nPlayer Name :%s", p[i].playerName);
        printf("\nPlayer jerseyNumber :%d", p[i].jerseyNumber);
        printf("\nPlayer runs :%d", p[i].runs);
        printf("\nPlayer wickets :%d", p[i].wickets);
        printf("\nPlayer matchesPlayed :%d", p[i].matchesPlayed);
    }
}

void displayOnePlayer(Player *p)
{
    printf("\n\n\tPlayer Data is : ");
    printf("\nPlayer Name :%s", p->playerName);
    printf("\nPlayer jerseyNumber :%d", p->jerseyNumber);
    printf("\nPlayer runs :%d", p->runs);
    printf("\nPlayer wickets :%s", p->wickets);
    printf("\nPlayer matchesPlayed :%s", p->matchesPlayed);
}

int searchPlayerByJerseyNumber(Player *p, int jerseyNumber)
{
    for (int i = 0; i < PlayerIndex; i++)
    {
        if (p[i].jerseyNumber == jerseyNumber)
        {
            return i;
        }
    }
    return -1;
}

int searchPlayerByName(Player *p, char playerName[])
{
    for (int i = 0; i < PlayerIndex; i++)
    {
        if (strcasecmp(p[i].playerName, playerName) == 0)
        {
            return i;
        }
    }
    return -1;
}

void updatePlayer(Player *p, int jerseyNumber)
{
    int plr = searchPlayerByJerseyNumber(p, jerseyNumber);
    if (plr == -1)
    {
        printf("\nNo Player Found of JerseyNumber: %d", jerseyNumber);
    }
    else
    {
        printf("\nOld Wickets is : %d\nEnter new Wickets :", p[plr].wickets);
        scanf("%d", &p[plr].wickets);
        printf("\nOld runs are : %d \nEnter new Runs :", p[plr].runs);
        scanf("%d", &p[plr].runs);
        printf("\nOld Matches Played is : %d\nEnter new Matches Played :", p[plr].matchesPlayed);
        scanf("%d", &p[plr].matchesPlayed);
    }
}

void removePlayer(Player *p, int jerseyNumber)
{
    // Remove Player and
    int plr = searchPlayerByJerseyNumber(p, jerseyNumber);
    if (plr == -1)
    {
        printf("\nNo Player Found of Jersey Number: %d", jerseyNumber);
    }
    else
    {
        for (int i = 0; i < PlayerIndex; i++)
        {
            if (p[i].jerseyNumber == p[plr].jerseyNumber)
            {
                for (int j = plr; j < PlayerIndex - 1; j++)
                {
                    p[j] = p[j + 1];
                }
                PlayerIndex--;
            }
        }
    }
}

Player *sortPlayeByruns(Player *p, char AD)
{
    Player *p1 = (Player *)malloc(sizeof(Player) * PlayerIndex);
    // Player p1[PlayerIndex];
    for (int i = 0; i < PlayerIndex; i++)
    {
        p1[i] = p[i];
    }
    switch (AD)
    {
    case 'A':
        for (int i = 0; i < PlayerIndex; i++)
        {
            for (int j = 0; j < PlayerIndex - 1; j++)
            {
                if (p1[j].runs > p1[j + 1].runs)
                {
                    Player temp = p1[j];
                    p1[j] = p1[j + 1];
                    p1[j + 1] = temp;
                }
            }
        }
        return p1;
    case 'D':
        for (int i = 0; i < PlayerIndex; i++)
        {
            for (int j = 0; j < PlayerIndex - 1; j++)
            {
                if (p1[j].runs < p1[j + 1].runs)
                {
                    Player temp = p1[j];
                    p1[j] = p1[j + 1];
                    p1[j + 1] = temp;
                }
            }
        }
        return p1;
    default:
        printf("\nInvalid Order");
        return NULL;
    }
}

Player *sortPlayerjerseyNumber(Player *p, char AD)
{
    Player *p1 = (Player *)malloc(sizeof(Player) * PlayerIndex);
    // Player p1[PlayerIndex];
    for (int i = 0; i < PlayerIndex; i++)
    {
        p1[i] = p[i];
    }
    switch (AD)
    {
    case 'A':
        for (int i = 0; i < PlayerIndex; i++)
        {
            for (int j = 0; j < PlayerIndex - 1; j++)
            {
                if (p1[j].jerseyNumber > p1[j + 1].jerseyNumber)
                {
                    Player temp = p1[j];
                    p1[j] = p1[j + 1];
                    p1[j + 1] = temp;
                }
            }
        }
        return p1;

    case 'D':
        for (int i = 0; i < PlayerIndex; i++)
        {
            for (int j = 0; j < PlayerIndex - 1; j++)
            {
                if (p1[j].jerseyNumber < p1[j + 1].jerseyNumber)
                {
                    Player temp = p1[j];
                    p1[j] = p1[j + 1];
                    p1[j + 1] = temp;
                }
            }
        }
        return p1;

    default:
        printf("\nInvalid Order");
        return NULL;
    }
}

Player *sortPlayerMatchesPlayd(Player *p, char AD)
{
    Player *p1 = (Player *)malloc(sizeof(Player) * PlayerIndex);
    // Player p1[PlayerIndex];
    for (int i = 0; i < PlayerIndex; i++)
    {
        p1[i] = p[i];
    }
    switch (AD)
    {
    case 'A':
        for (int i = 0; i < PlayerIndex; i++)
        {
            for (int j = 0; j < PlayerIndex - 1; j++)
            {
                if (p1[j].matchesPlayed > p1[j + 1].matchesPlayed)
                {
                    Player temp = p1[j];
                    p1[j] = p1[j + 1];
                    p1[j + 1] = temp;
                }
            }
        }
        return p1;

    case 'D':
        for (int i = 0; i < PlayerIndex; i++)
        {
            for (int j = 0; j < PlayerIndex - 1; j++)
            {
                if (p1[j].matchesPlayed < p1[j + 1].matchesPlayed)
                {
                    Player temp = p1[j];
                    p1[j] = p1[j + 1];
                    p1[j + 1] = temp;
                }
            }
        }
        return p1;

    default:
        printf("\nInvalid Order");
        return NULL;
    }
}

void main()
{

    Player *listOfPlayers = (Player *)malloc(sizeof(Player) * size);
    // Player arr[10];
    // printf("\nSizeof Player :%d", sizeof(listOfPlayers) / sizeof(listOfPlayers[0]));
    // printf("\nSizeof Player :%d", sizeof(*listOfPlayers) * size);
    int choice = 0;
    // hardCodedPlayers(listOfPlayers);

    do
    {
        int jerseyNumber;
        char auth[50];
        showMenu();
        scanf("%d", &choice);
        int sCh;
        char AD;
        Player *plr1;
        switch (choice)
        {
        case 1:
            printf("\nSizeof Player :%d", sizeof(*listOfPlayers) * size);
            listOfPlayers = addPlayer(listOfPlayers, 1);
            break;
        case 2:
            printf("\nEnter How many Players do you Want to store :");
            int PlayerQuantity;
            scanf("%d", &PlayerQuantity);
            // listOfPlayers = (Player *)malloc(sizeof(Player) * PlayerQuantity);
            listOfPlayers = addPlayer(listOfPlayers, PlayerQuantity);
            break;
        case 3:
            displayPlayers(listOfPlayers);
            break;
        case 4:
            printf("\nHow do you want to search Player : \n 1) By Player jerseyNumber \t 2) By Player Name ");
            int srplr;
            scanf("%d", &srplr);
            if (srplr == 1)
            {
                printf("\nEnter the jerseyNumber of Player you want to search");
                scanf("%d", &jerseyNumber);
                int res = searchPlayerByJerseyNumber(listOfPlayers, jerseyNumber);
                if (res == -1)
                {
                    printf("\nNo Player Found for jerseyNumber: %d", jerseyNumber);
                }
                else
                {
                    displayOnePlayer(&listOfPlayers[res]);
                }
            }
            else if (srplr == 2)
            {
                char plrNm[50];
                printf("\nEnter the Name of Player you want to search");
                fflush(stdin);
                gets(plrNm);
                int res = searchPlayerByName(listOfPlayers, plrNm);
                if (res == -1)
                {
                    printf("\nNo Player Found for Name: %s", plrNm);
                }
                else
                {
                    displayOnePlayer(&listOfPlayers[res]);
                }
            }
            else
            {
                printf("\nBad Behavior man sahi se number dal na meri jaan..!");
            }
            break;

        case 5:
            printf("\nEnter the id of Player you want to Update");
            scanf("%d", &jerseyNumber);
            updatePlayer(listOfPlayers, jerseyNumber);
            break;
        case 6:
            printf("\nEnter the id of Player you want to Delete");
            scanf("%d", &jerseyNumber);
            removePlayer(listOfPlayers, jerseyNumber);
            break;

        case 7:

            printf("\nEnter Your Choice:");
            printf("\n1) Sort By runs:");
            printf("\n2) Sort By jerseyNumber:");

            scanf("%d", &sCh);
            switch (sCh)
            {
            case 1:
                printf("\nEnter Order :\n'A' For ascending order \n'D'  for descending Order");
                fflush(stdin);
                scanf("%c", &AD);
                plr1 = sortPlayeByruns(listOfPlayers, AD);
                if (plr1 != NULL)
                {
                    displayPlayers(plr1);
                    free(plr1);
                }
                break;
            case 2:
                printf("\nEnter Order :\n'A' For ascending order \n'D' For descending Order");
                fflush(stdin);
                scanf("%c", &AD);
                plr1 = sortPlayerjerseyNumber(listOfPlayers, AD);

                if (plr1 != NULL)
                {
                    displayPlayers(plr1);
                    free(plr1);
                }
                break;
            default:
                printf("\nInvalid Choice..!");
                break;
            }
            break;
        case 8:
            printf("\nEnter Your Choice:");
            printf("\n1) Top 3 Players By runs:");
            printf("\n2) Top 3 Players By Matches Played :");

            scanf("%d", &sCh);
            switch (sCh)
            {
            case 1:
                printf("\nEnter Order :\n'A' For Highest runs \n'D'  For Lowest runs");
                fflush(stdin);
                scanf("%c", &AD);
                plr1 = sortPlayeByruns(listOfPlayers, AD);
                if (plr1 != NULL)
                {
                    displayTop3(plr1);
                    free(plr1);
                }
                break;
            case 2:
                printf("\nEnter Order :\n'A' For Highest jerseyNumber \n'D'  For Lowest Order");
                fflush(stdin);
                scanf("%c", &AD);
                plr1 = sortPlayerjerseyNumber(listOfPlayers, AD);
                if (plr1 != NULL)
                {
                    displayTop3(plr1);
                    free(plr1);
                }
                break;
            default:
                printf("\nInvalid Choice..!");
                break;
            }

            break;
        default:
            printf("\nInvalid Choice Brooo!");
            break;
        }
    } while (choice);
    free(listOfPlayers);
}

void showMenu()
{
    printf("\n\n:Player System:\n");
    printf("\n1)Add Player \t2)Add Multiple Players \t3)Display All Players \n4)Search Player By ID \t5) Update Player \t6) Remove Player \n7) List All wicketss \t8) List The Players By wickets \t9) List All Categories \n10) List Players By Categories \t11) Sort Players \t12) List Top 3 Players \n");
}

// void hardCodedPlayers(Player *p)
// {
//     p[0] = (Player){1, "Sachin Tendulkar", 10, 18426, 154, 463};
//     p[1] = (Player){2, "Virat Kohli", 18, 12898, 4, 274};
//     p[2] = (Player){3, "MS Dhoni", 7, 10773, 1, 350};
//     p[3] = (Player){4, "Rohit Sharma", 45, 10166, 8, 243};
//     p[4] = (Player){5, "Yuvraj Singh", 12, 8701, 111, 304};
//     p[5] = (Player){6, "Kapil Dev", 83, 3783, 253, 225};
//     p[6] = (Player){7, "Jasprit Bumrah", 93, 19, 121, 72};
//     p[7] = (Player){8, "Shikhar Dhawan", 25, 6793, 0, 167};
//     p[8] = (Player){9, "Anil Kumble", 3, 937, 337, 269};
//     p[9] = (Player){10, "Zaheer Khan", 34, 792, 282, 200};
//     p[10] = (Player){11, "Sourav Ganguly", 99, 11363, 100, 311};
//     p[11] = (Player){12, "Rahul Dravid", 19, 10889, 4, 344};
//     p[12] = (Player){13, "Harbhajan Singh", 3, 1237, 269, 236};
//     p[13] = (Player){14, "Mohammed Shami", 11, 141, 162, 95};
//     p[14] = (Player){15, "Gautam Gambhir", 5, 5238, 0, 147};
//     p[15] = (Player){16, "Ashish Nehra", 64, 141, 157, 120};
//     p[16] = (Player){17, "Ravindra Jadeja", 12, 2411, 191, 174};
//     p[17] = (Player){18, "Irfan Pathan", 56, 1544, 173, 120};
//     p[18] = (Player){19, "VVS Laxman", 6, 2338, 0, 86};
//     p[19] = (Player){20, "KL Rahul", 1, 1986, 0, 54};
//     PlayerIndex = 20; // Update the PlayerIndex
// }
