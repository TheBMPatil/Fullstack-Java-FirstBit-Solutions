#include <stdio.h>
void main()
{
    int cardIn, choice;
    printf("Insert card(0=no/1=Yes) : \n");
    scanf("%d", &cardIn);
    float bal = 0;
    while (cardIn)
    {
        printf("\n Welcome To YZ ATM \n");
        printf("Choose from below Choice : \n");
        printf("1) Cheack Balance : \n");
        printf("2) Deposite Money : \n");
        printf("3) Withdraw Money : \n");
        printf("4) Exit : \n");
        scanf("%d", &choice);
        if (choice > 4 || choice <= 0)
        {
            printf("Inavalid Choice !");
        }
        else if (choice == 1)
        {
            printf("%.2f Is account Balance\n", bal);
        }
        else if (choice == 2)
        {
            float Depo = 0;
            printf("Enter Amount to Deposite : \n");
            scanf("%f", &Depo);
            bal += Depo;
            printf("%.2f Is account Balance\n", bal);
        }
        else if (choice == 3)
        {
            float withd = 0;
            printf("Enter Amount to Withdraw : \n");
            scanf("%f", &withd);
            if (bal < withd)
            {
                printf("Low balance broo!");
            }
            else
            {
                bal -= withd;
                printf("Withdrawal of %.2f is successful and balance is %.2f ", withd, bal);
            }
        }
        else if (choice == 4)
        {
            cardIn = 0;
        }
    }
}