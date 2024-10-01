#include <stdio.h>
float discount(float);
int greatestOfThree(int, int, int);
void calculator();
int addition(int, int);
void UseChoice();
int substraction(int, int);
int multiplication(int, int);
int division(int, int);

int greatOfThree(int, int, int);
float discountStudent(float, char);
void evenOdd(int);
void salary(float);

void main()
{
    int ch = 1;
    while (ch)
    {
        printf("\n Eneter your choice : \n");
        printf("1) Discount: \n");
        printf("2) Greatest of Three: \n");
        printf("3) calculator: \n");
        printf("4) UserChoice : \n");
        printf("5) Student Discount: \n");
        printf("Enter 0 To exit");

        scanf("%d", &ch);
        if (ch > 5 || ch < 0)
        {
            printf("Inavalid Choice !");
        }
        else if (ch == 1)
        {
            float Op;
            printf("Enter Original Price broo:");
            scanf("%f", &Op);
            printf("%.4f is final Price \n ", discount(Op));
        }
        else if (ch == 2)
        {
            printf("Gretest of Three Numbers \n");
            // get value of a b c from user
            printf("\n Enter 3 Numbers :");
            int A, B, C;
            scanf("%d%d%d", &A, &B, &C);

            printf("%d is greatest. \n", greatestOfThree(A, B, C));
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
            float price, finalprice;
            printf("Enter Price of the product : \n");
            scanf("%f", &price);
            printf("Are you a Student ? (Y/N) \n");
            char std = getch();
            printf("%.2f is Final Price. \n", discountStudent(price, std));
        }
        else if (ch == 0)
        {
            break;
        }
    }
}
float discount(float Op)
{

    float finalPrice;
    if (Op <= 1000)
    {
        finalPrice = Op - (0.05 * Op);
        return finalPrice;
    }
    else if (Op <= 5000)
    {
        finalPrice = Op - (0.10 * Op);
        return finalPrice;
    }
    else if (Op <= 10000)
    {
        finalPrice = Op - (0.20 * Op);
        return finalPrice;
    }
    else if (Op > 10000)
    {
        finalPrice = Op - (0.25 * Op);
        return finalPrice;
    }
}
int greatestOfThree(int A, int B, int C)
{

    return A > B && A > C ? A : B > C ? B
                                      : C;
}
void calculator()
{
    printf("Enetr your Choice: \n");
    printf("A Addition \n");
    printf("S Substraction \n");
    printf("M Multiplication \n");
    printf("D Dividion \n");
    char op = getch();
    int A, B;

    if (op == 'A')
    {
        printf("Chosen Operation is Addition.. \n ");
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        printf("%d is Addition.", addition(A, B));
    }
    else if (op == 'S')
    {
        printf("Chosen Operation is Substraction.. \n ");
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        printf("%d is Substraction.", substraction(A, B));
    }
    else if (op == 'M')
    {
        printf("Chosen Operation is Multiplication.. \n ");
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        printf("%d is Multiplication ", multiplication(A, B));
    }
    else if (op == 'D')
    {
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        printf("Chosen Operation is Division.. \n ");
        printf("%d is Division \n", division(A, B));
    }
}

int addition(int A, int B)
{
    return (A + B);
}

int division(int A, int B)
{

    if (A == 0 || B == 0)
    {
        printf("Divide by zero exception !!!");
        return 0;
    }
    else if (A < B)
    {
        return (B / A);
    }
    else
    {
        return (A / B);
    }
}

int substraction(int A, int B)
{

    return (B - A);
}

int multiplication(int A, int B)
{
    return (A * B);
}

void UseChoice()
{ // Choice to be taken from user when learn about Scan
    printf("\n Enter Your choice \n");
    printf("\n E for EvenOdd \n");
    printf("\n S for Slary Calculation \n");
    printf("\n G for Finding greatest of three. \n");
    char choice = getch();

    if (choice == 'E')
    {
        int num;
        printf("Enter A number to check Even or Odd \n");
        scanf("%d", &num);
        evenOdd(num);
    }
    else if (choice == 'S')
    {
        printf("Salary calculation \n");
        float baseSalary;
        printf("Enter Base salary: \n");
        scanf("%f", &baseSalary);
        salary(baseSalary);
    }
    else if (choice == 'G')
    {
        printf("Gretest of Three Numbers \n");
        // get value of a b c from user
        printf("\n Enter 3 Numbers :");
        int A, B, C;
        scanf("%d%d%d", &A, &B, &C);

        printf("%d is greatest. \n", greatestOfThree(A, B, C));
    }
}

float discountStudent(float price, char std)
{
    float finalprice;
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
    return (finalprice);
}

void evenOdd(int num)
{

    if (num % 2 == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is odd.");
    }
}

void salary(float baseSalary)
{
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

    printf("\n %.4f is Totalsalary.", DA + TA + HRA + baseSalary);
}