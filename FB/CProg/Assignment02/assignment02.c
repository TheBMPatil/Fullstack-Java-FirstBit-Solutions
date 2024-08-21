#include <stdio.h>
void discount();
void greatestOfThree();
void calculator();
void UseChoice();
void discountStudent();
void main()
{
    int ch;
    printf("Eneter your choice : \n");
    printf("1) Discount: \n");
    printf("2) Greatest of Three: \n");
    printf("3) calculator: \n");
    printf("4) UserChoice : \n");
    printf("5) Student Discount: \n");

    scanf("%d", &ch);
    if (ch > 5 || ch <= 0)
    {
        printf("Inavalid Choice !");
    }
    else if (ch == 1)
    {
        discount();
    }
    else if (ch == 2)
    {
        greatestOfThree();
    }
    else if (ch == 3)
    {
        calculator();
    }
    else if (ch == 4)
    {
        UseChoice();
    }
    else if (ch == 5)
    {
        discountStudent();
    }
}
void discount()
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
void greatestOfThree()
{
    int A = 19, B = 40, C = 300;
    if (A > B && A > C)
    {
        printf("%d A is greatest.", A);
    }
    else if (B > C)
    {
        printf("%d B is greatest.", B);
    }
    else
    {
        printf("%d C is greatest.", C);
    }

    // using Ternary operator
    printf("\n");
    printf("%d is the greatest.", A > B && A > C ? A : B > C ? B
                                                             : C);
}
void calculator()
{
    int A = 12, B = 0;
    char op = 'D';

    if (op == 'A')
    {
        printf("Operation choosen is Addition \n");
        printf("%d is addition of A %d and B %d", A + B, A, B);
    }
    else if (op == 'S')
    {
        if (A < B)
        {
            printf("Operation choosen is  Substraction\n");
            printf("%d is Substraction of B %d and A %d", B - A, B, A);
        }
        else
        {

            printf("Operation choosen is  Substraction\n");
            printf("%d is Substraction of A %d and B %d", A - B, A, B);
        }
    }
    else if (op == 'M')
    {
        printf("Operation choosen is Multiplication \n");
        printf("%d is Multiplication of A %d and B %d", A * B, A, B);
    }
    else if (op == 'D')
    {
        if (A == 0 || B == 0)
        {
            printf("Zero is not divisible \n");
        }
        else
        {
            printf("Operation choosen is Division \n");
            printf("%d is Division of A %d and B %d", A / B, A, B);
        }
    }
}
void UseChoice()
{ // Choice to be taken from user when learn about Scan
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
void discountStudent()
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