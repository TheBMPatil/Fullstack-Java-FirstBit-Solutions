// Accept the price from user. Ask the user if he is a student (user may say yes or no). If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%. But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.
#include <stdio.h>
void main()
{
    float price = 45500.0, finalprice;
    char std = 'N';
    if (std == 'Y')
    {
        if (price >= 500)
        {
            finalprice = price - (price * 0.20);
        }
        else
        {

            finalprice = price - (price * 0.10);
        }
    }
    else if (std == 'N' && price > 600)
    {
        finalprice = price - (price * 0.15);
    }
    else
    {
        finalprice = price;
    }
    printf("Final price is : %.2f", finalprice);
}