#include <stdio.h>
void showbalance(int *);
void deposite(int *, int);
void withdraw(int *, int);
void main()
{
    int bal = 2500;
    int ch = 10, amt;
    while (ch)
    {
        printf("\nEnter Your choice : ");
        printf("\n1) Show Balance: ");
        printf("\n2) Deposite money: ");
        printf("\n3) Withdraw Money: ");
        printf("\n 0) Exit: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            showbalance(&bal);
            break;
        case 2:
            printf("\nEnter amount you want to Deposite : ");
            scanf("%d", &amt);
            deposite(&bal, amt);
            break;
        case 3:
            printf("\nEnter amount you want to withdraw : ");
            scanf("%d", &amt);
            withdraw(&bal, amt);
            break;
        case 0:
            return;
            break;

        default:
            break;
        }
    }
}
void showbalance(int *ba)
{
    printf("\nBalance: %d", *ba);
}
void withdraw(int *ba, int amt)
{
    if (*ba < 3000)
    {
        printf("\nLow balance broo!!!!");
    }
    else
    {
        *ba = *ba - amt;
        printf("\nWithdrawal success of %d . Remaining bal : %d", amt, *ba);
    }
}
void deposite(int *ba, int amt)
{
    *ba += amt;
    printf("\nDeposite success of %d . New bal : %d", amt, *ba);
}
