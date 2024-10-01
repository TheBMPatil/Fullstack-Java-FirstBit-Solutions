#include <stdio.h>
void discount();
void greatestOfThree();
void calculator();
void UseChoice();
void discountStudent();

int addition();
int substraction();
int multiplication();
float division();
int evenOdd();
float salary();

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
        else if (ch == 0)
        {
            break;
        }
    }
}
void discount()
{
    float Op;
    printf("Enter Original Price broo:");
    scanf("%f", &Op);
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
    int A, B, C;
    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &A, &B, &C);
    // if (A > B && A > C)
    // {
    //     printf("%d A is greatest.", A);
    // }
    // else if (B > C)
    // {
    //     printf("%d B is greatest.", B);
    // }
    // else
    // {
    //     printf("%d C is greatest.", C);
    // }

    // using Ternary operator
    printf("\n");
    printf("%d is the greatest.", A > B && A > C ? A : B > C ? B
                                                             : C);
}
void calculator()
{
    printf("Enetr your Choice: \n");
    printf("A Addition \n");
    printf("S Substraction \n");
    printf("M Multiplication \n");
    printf("D Dividion \n");
    char op = getch();

    if (op == 'A')
    {
        printf("Chosen Operation is Addition.. \n ");
        printf("%d is addition. \n", addition());
    }
    else if (op == 'S')
    {
        printf("Chosen Operation is Substraction.. \n ");
        printf("%d is Substraction.", substraction());
    }
    else if (op == 'M')
    {
        printf("Chosen Operation is Multiplication.. \n ");
        printf("%d is Multiplication.", multiplication());
    }
    else if (op == 'D')
    {
        printf("Chosen Operation is Division.. \n ");
        printf("%.2f is result of division.", division());
    }
}

int addition()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
    return (A + B);
}

float division()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
    if (A < B)
    {
        return (B / A);
    }
    else
    {
        return (A / B);
    }
}

int substraction()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
    if (A < B)
    {
        return (B - A);
    }
    else
    {
        return (A - B);
    }
}

int multiplication()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
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
        if (evenOdd())
        {
            printf("Number is Even \n");
        }
        else
        {
            printf("Number is odd.");
        }
    }
    else if (choice == 'S')
    {
        printf("Salary calculation \n");

        printf("Total Salary is : %f \n", salary());
    }
    else if (choice == 'G')
    {
        printf("Gretest of Three Numbers \n");
        // get value of a b c from user
        printf("\n Enter 3 Numbers :");
        int A, B, C;
        scanf("%d%d%d", &A, &B, &C);

        printf("%d is the greatest.\n", A > B && A > C ? A : (B > C ? B : C));
    }
}
void discountStudent()
{
    float price, finalprice;
    printf("Enter Price of the product : \n");
    scanf("%f", &price);
    printf("Are you a Student ? (Y/N) \n");
    char std = getch();
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

int evenOdd()
{
    int num;
    printf("Enter A number to check Even or Odd \n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float salary()
{
    float baseSalary, totalSalary;
    printf("Enter Base salary: \n");
    scanf("%f", &baseSalary);
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
    return totalSalary;
}