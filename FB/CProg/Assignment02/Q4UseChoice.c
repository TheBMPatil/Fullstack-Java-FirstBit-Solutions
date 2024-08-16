// Display a menu to the user (like 1.Even Odd 2. Basic salary etc), ask the user to enter his choice, then based on that perform the desired operations.
#include <stdio.h>
void main()
{
    // Choice to be taken from user when learn about Scan
    char choice = 'E';
    int A = 10, B = 13, C = 45;

    if (choice == 'E')
    {
        printf("EvenOdd \n");
        // get Num from user
        int num = 12;
        num % 2 == 0 ? printf("%d num is Even \n", num) : printf("%d num is Odd \n", num);
    }
    else if (choice == 'S')
    {
        printf("Salary calculation \n");
        // Get baseSalary from user
        float baseSalary = 7777.0, totalSalary;
        float DA, TA, HRA;
        if (baseSalary <= 5000)
        {
            DA = 0.10 * baseSalary;
            TA = 0.20 * baseSalary;
            HRA = 0.25 * baseSalary;
        }
        else
        {
            DA = 0.15 * baseSalary;
            TA = 0.25 * baseSalary;
            HRA = 0.30 * baseSalary;
        }
        totalSalary = DA + TA + HRA + baseSalary;
        printf("Total Salary for bsae %f is : %f \n", baseSalary, totalSalary);
    }
    else if (choice == 'G')
    {
        printf("Gretest of Three Numbers \n");
        // get value of a b c from user
        printf("%d is the greatest.\n", A > B && A > C ? A : (B > C ? B : C));
    }
}
