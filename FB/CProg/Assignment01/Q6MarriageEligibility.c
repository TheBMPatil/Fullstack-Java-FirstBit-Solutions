#include <stdio.h>
void main()
{
    int maleAge = 25, femaleAge = 29;
    char gender = 'f';

    // // Cheacking for male
    // if (maleAge >= 21)
    // {
    //     printf("Male person with age %d is Eligible to marry! \n", maleAge);
    // }
    // else
    // {
    //     printf("Male person with age %d is Not Eligible to marry! \n", maleAge);
    // }

    // // // Cheacking for female
    // if (femaleAge >= 18)
    // {
    //     printf("Female person with age %d is Eligible to marry! \n", femaleAge);
    // }
    // else
    // {
    //     printf("Female person with age %d is Not Eligible to marry! \n", femaleAge);
    // }

    // // To cheack for eligibility to with each other

    // if (femaleAge >= 18 && maleAge >= 21 && maleAge >= femaleAge)
    // {
    //     printf("Male with age %d and Female with age %d are eligible to marry each other! \n", maleAge, femaleAge);
    // }
    // else
    // {
    //     printf("Male with age %d and Female with age %d are not eligible to marry each other! \n", maleAge, femaleAge);
    // }

    if (gender == 'f' && femaleAge >= 18 || gender == 'm' && maleAge >= 21)
    {
        printf("Eligible to marry");
    }
    else
    {
        printf("Not Eligible to marry");
    }
}