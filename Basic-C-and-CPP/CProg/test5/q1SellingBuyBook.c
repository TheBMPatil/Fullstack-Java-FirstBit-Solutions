#include <stdio.h>

int calculateSellingPrice(int);
void main()
{
    int cost;
    printf("Enter the Cost price of the book :");
    scanf("%d", &cost);
    printf("\n%d is final Selling price.", calculateSellingPrice(cost));
}
int calculateSellingPrice(int cost)
{

    int discount = getDiscount(cost);
    printf("\nSelling price applied 50%% more than cost price and");
    printf("\n%d discount applied", discount);

    return ((cost + (cost * 0.50)) - discount);
}

int getDiscount(int cost)
{
    if (cost < 500)
    {
        printf("\n5%% discount.");
        return cost * 0.05;
    }
    else if (cost < 5000)
    {
        printf("\n10%% discount.");
        return cost * 0.10;
    }
    else if (cost < 10000)
    {
        printf("\n20%% discount.");
        return cost * 0.20;
    }

    else if (cost > 10000)
    {
        printf("\n38%% discount.");
        return cost * 0.38;
    }
}