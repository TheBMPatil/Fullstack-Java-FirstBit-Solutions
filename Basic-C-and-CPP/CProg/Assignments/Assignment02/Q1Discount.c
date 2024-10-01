// Find the price of item when discount is given (specify different discount based on price)
#include <stdio.h>
void main()
{
    float Op = 5200;
    float finalPrice;
    if (Op <= 1000)
    {
        finalPrice = Op - (0.05 * Op);
        printf("%.2f is final price with 5%% discount on original price %.2f ", finalPrice, Op);
    }
    else if (Op <= 5000)
    {
        finalPrice = Op - (0.10 * Op);
        printf("%.2f is final price with 10%% discount on original price %.2f ", finalPrice, Op);
    }
    else if (Op <= 10000)
    {
        finalPrice = Op - (0.20 * Op);
        printf("%.2f is final price with 20%% discount on original price %.2f  ", finalPrice, Op);
    }
    else if (Op > 10000)
    {
        finalPrice = Op - (0.25 * Op);
        printf("%.2f is final price with 25%% discount on original price %.2f ", finalPrice, Op);
    }
}