// 2. Create a structure Time with data members as hrs, min, sec. Accept the values of all these members from user and display them. Also perform addition of two time variables and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert the given time into sec.
#include <stdio.h>
int showMenu();
typedef struct Time
{
    int HH;
    int MM;
    int SS;
} Time;
// Store Time
void storeTime(Time *time)
{
    int hour, min, sec;
    printf("\nEnter Time in Hour Minute Seconds Format");

    printf("\nHOUR:");
    scanf("%d", &hour);
    time->HH = hour;

    printf("\nMIN:");
    scanf("%d", &min);
    time->MM = min;

    printf("\nSEC:");
    scanf("%d", &sec);
    time->SS = sec;
}
// Display Time
void displayTime(Time *t)
{
    printf("\n\nTime in (HH:MM:SS) => %d:%d:%d ", t->HH, t->MM, t->SS);
}
// Add Two Times
Time addTwoTimes(Time *t1, Time *t2)
{
    Time temp;
    temp.HH = t1->HH + t2->HH;
    temp.MM = t1->MM + t2->MM;
    temp.SS = t1->SS + t2->SS;
    return temp;
}
// Convert in sensible time
Time formatTime(Time *time)
{
    Time temp;
    int tS = 0, tM = 0, tH = 0;

    // temp.MM = (time->MM) + time->SS / 60;
    // temp.SS = time->SS % 60;

    // temp.HH = (time->HH) + time->MM / 60;

    // temp.MM = time->MM % 60;

    temp.MM = time->MM + time->SS / 60;
    temp.SS = time->SS % 60;
    temp.HH = time->HH + temp.MM / 60;
    temp.MM = temp.MM % 60;
    return temp;
}
// Convert Whole Time in Seconds
int convertInSec(Time *time)
{
    int tSec = (time->HH * 3600) + time->MM * 60 + time->SS;
    return tSec;
}

void main()
{
    int ch = 0;
    Time time1, time2, temp;
    int tFch;
    do
    {
        ch = showMenu();
        switch (ch)
        {
        case 1:
            storeTime(&time1);
            break;
        case 2:
            storeTime(&time2);
            break;
        case 3:
            printf("\n--------------------------------------------: Time 1 :---------------------------------------------------");
            displayTime(&time1);
            printf("\n--------------------------------------------: Time 2 :---------------------------------------------------");
            displayTime(&time2);
            break;
        case 4:
            printf("\n------------------------------------: Addition Of Both times :-------------------------------------------");
            temp = addTwoTimes(&time1, &time2);
            displayTime(&temp);
            break;
        case 5:
            printf("\n-----------------------------------------: Format Time :------------------------------------------------");
            printf("\nEnter Your Choice \n1) Format Time 1 \t2) Format Time 2 \n:");
            scanf("%d", &tFch);
            switch (tFch)
            {
            case 1:
                printf("\n--------------------------------------: Formated Time 1 :---------------------------------------------");
                temp = formatTime(&time1);
                displayTime(&temp);
                break;
            case 2:
                printf("\n--------------------------------------: Formated Time 2 :---------------------------------------------");
                temp = formatTime(&time2);
                displayTime(&temp);
                break;
            default:
                printf("Invalid Choice!!!");
                break;
            }
            break;
        case 6:
            printf("\n--------------------------------------: Convert Time in Seconds :---------------------------------------------");
            printf("\nEnter Your Choice \n1) Convert Time 1 \t2) Convert Time 2 \n:");

            scanf("%d", &tFch);
            switch (tFch)
            {
            case 1:
                printf("\n--------------------------------------: Converted Time 1 :---------------------------------------------");
                printf("\nTotal Seconds :%d", convertInSec(&time1));
                break;
            case 2:
                printf("\n--------------------------------------: Convertted Time 2 :---------------------------------------------");
                printf("\nTotal Seconds :%d", convertInSec(&time2));
                break;

            default:
                printf("Invalid Choice!!!");
                break;
            }
            break;
        case 0:
            printf("\n\nExiting....");
            printf("\n--------------------------------------------------------------------------------------------------------\n");
            break;
        default:
            printf("Invalid Choice!!!");
            break;
        }
    } while (ch != 0);
}

int showMenu()
{
    int ch;
    printf("\n\n---------------------------------------------------------------------------------------------------------");
    printf("\n---------------------------------------------: Time :----------------------------------------------------");
    printf("\n\t                            \tEnter Your Choice \n\n1) Store Time1          \t 2) Store Time2 \t 3) Display both Times \n4) Additio of both times \t 5) Convert Time \t 6) Cover Time Into Seconds \n : ");
    scanf("%d", &ch);
    printf("\n--------------------------------------------------------------------------------------------------------\n");
    return ch;
}