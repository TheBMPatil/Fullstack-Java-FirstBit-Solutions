#include <stdio.h>
void discount();
void greatestOfThree();
void UseChoice();
void discountStudent();

void calculator();
void addition();
void substraction();
void multiplication();
void division();

void evenOdd();
void salary();

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
        addition();
    }
    else if (op == 'S')
    {
        printf("Chosen Operation is Substraction.. \n ");
        substraction();
    }
    else if (op == 'M')
    {
        printf("Chosen Operation is Multiplication.. \n ");
        multiplication();
    }
    else if (op == 'D')
    {
        printf("Chosen Operation is Division.. \n ");
        division();
    }
}

void addition()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
    printf("\n %d is a Addition.", (A + B));
}

void division()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
    if (A < B)
    {
        printf("\n %d is Division. \n", (B / A));
    }
    else
    {
        printf("\n %d is Division. \n", (A / B));
    }
}

void substraction()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
    printf("\n %d is Substraction. \n", (B - A));
}

void multiplication()
{
    printf("Enter Two numbers : ");
    int A, B;
    scanf("%d%d", &A, &B);
    printf("\n %d is a Multiplication.", (A * B));
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
        evenOdd();
    }
    else if (choice == 'S')
    {
        printf("Salary calculation \n");

       salary();
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

void evenOdd()
{
    int num;
    printf("Enter A number to check Even or Odd \n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is odd.");
    }
}

void salary()
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

    printf("\n %.4f is Totalsalary.", DA + TA + HRA + baseSalary);
}