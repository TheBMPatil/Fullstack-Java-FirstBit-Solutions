#include <stdio.h>
void taxCal(float);
void creditCardEligibility(float);
void main()
{
    printf("\nEnter your taxable income. \n");
    float baseIncome;
    scanf("%f", &baseIncome);
    // printf("\n %f", baseIncome);
    taxCal(baseIncome);
    creditCardEligibility(baseIncome);
}

void taxCal(float baseIncome)
{
    // printf("\n %f in nfun", baseIncome);
    if (baseIncome <= 500000)
    {
        printf("\n You Don't need to pay any tax");
    }
    else if (baseIncome > 500001 && baseIncome <= 1000000)
    {
        printf("\n You will need to pay 7%% tax : %.4f \n you get in hand: %.4f", (baseIncome * 0.07), (baseIncome - (baseIncome * 0.07)));
    }
    else if (baseIncome >= 1000001)
    {
        printf("\n You will need to pay 15%% tax : %.4f \n you get in hand: %.4f", (baseIncome * 0.15), (baseIncome - (baseIncome * 0.15)));
    }
}

void creditCardEligibility(float baseIncome)
{
    if (baseIncome < 500000)
    {
        printf("\n You are not Eligible for creditcard");
    }
    else if (baseIncome >= 500001)
    {
        printf("\n You are Eligible for creditcard");
    }
}