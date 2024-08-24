#include <stdio.h>
void tempConvert(int);
void evenOdd(int);
void areaAndPerimetere();
void circumference(float);
void areaofCircle(float);
void areaofRect(int, int);
void perimeter(int, int);

void sumOfDigitAndReverse();
void sumOfDigits(int);
void reverseNum(int);

void salary(float);
void marriageEligibility();

void main()
{
    int ch = 1;
    while (ch)
    {
        printf("\n Eneter your choice : \n");
        printf("1) Temp Convert: \n");
        printf("2) Area And Perimeter: \n");
        printf("3) Sum Of Digits and Reverse: \n");
        printf("4) Even Odd : \n");
        printf("5) Salary: \n");
        printf("6) Marriage Eligibility: \n");

        scanf("%d", &ch);
        if (ch > 6 || ch <= 0)
        {
            printf("Inavalid Choice !");
        }
        else if (ch == 1)
        {
            int cel;
            printf("Enter Teperature in Celcious.");
            scanf("%d", &cel);
            tempConvert(cel);
        }
        else if (ch == 2)
        {
            areaAndPerimetere();
        }
        else if (ch == 3)
        {
            sumOfDigitAndReverse();
        }
        else if (ch == 4)
        {
            int num;
            printf("Enter A Number : \n");
            scanf("%d", &num);
            evenOdd(num);
        }
        else if (ch == 5)
        {
            float baseSalary, totalSalary;
            printf("\n Enter Base Salary :  \n");
            scanf("%f", &baseSalary);
            salary(baseSalary);
        }
        else if (ch == 6)
        {
            marriageEligibility();
        }
    }
}
void tempConvert(int CL)
{

    float fr = (9.0 / 5.0) * CL + 32;
    printf("Temparature In feranhite is :%.2f \n", fr);
}
void areaAndPerimetere()
{
    printf("What do you want to do brooo. \n");
    int ch;
    printf("1> Area of Circle\n");
    printf("2> Area of Reactangle\n");
    printf("3> Perimeter of Reactangle \n");
    printf("4> Circumference of Circle\n");
    scanf("%d", &ch);
    if (ch == 0 || ch > 4 || ch < 0)
    {
        printf("Invalid Choice broooo!!!");
    }
    else if (ch == 1)
    {
        float rad;
        printf("Enter Radious of Circle");
        scanf("%f", &rad);
        areaofCircle(rad);
    }
    else if (ch == 2)
    {
        printf("\n");
        int L, W;
        printf("\n Enter Length and Width of Reactangle : \n");
        scanf("%d%d", &L, &W);
        areaofRect(L, W);
    }
    else if (ch == 3)
    {
    }
    else if (ch == 4)
    {
        float rad;
        printf("Enter Radious of Circle");
        scanf("%f", &rad);
        circumference(rad);
    }
}
void areaofCircle(float rad)
{
    const float PI = 3.14;
    float areaOfCir = PI * (rad * rad);
    printf("\n %.2f is area of Circle. \n", areaOfCir);
}
void circumference(float rad)
{
    const float PI = 3.14;
    float Circumfer = 2.0 * PI * rad;
    printf("\n %f is circumference of the circle.", Circumfer);
}
void areaofRect(int L, int W)
{

    printf("%d is area of Rectangle: ", L * W);
}
void perimeter(int L, int W)
{

    printf("\n %d is perimeter of Rectangle. \n", (2 * (L + W)));
}

void sumOfDigitAndReverse()
{
    printf("What do you Whant to do : \n");
    printf("1> Sum Of Digits of number: \n");
    printf("2> Reverse the number : \n");
    int ch, num;
    scanf("%d", &ch);
    printf("Enter a Number : \n");
    scanf("%d", &num);
    if (ch == 1)
    {
        sumOfDigits(num);
    }
    else if (ch == 2)
    {
        reverseNum(num);
    }
    else
    {
        printf("Invalid Choice brooo!! \n");
    }
}
void sumOfDigits(int num)
{
    int sum = 0;
    for (num; num > 0; num /= 10)
    {
        sum += (num % 10);
    }
    printf("\n %d is A Sum Of digits of number. \n", sum);
}
void reverseNum(int num)
{

    int rev = 0;
    scanf("%d", &num);
    for (num; num > 0; num /= 10)
    {
        rev = (rev * 10) + (num % 10);
    }
    printf("\n %d is Reverse Number. \n", rev);
}
void evenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("\n Number is Even! \n");
    }
    else
    {
        printf("\n Number is odd! \n");
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

    printf("\n %.4f is your Total Salary \n", (DA + TA + HRA + baseSalary));
}
void marriageEligibility()
{
    int maleAge, femaleAge;
    char gender;
    printf("\n Enter Your Gender (f/m): ");
    fflush(stdin);
    scanf("%c", &gender);
    if (gender == 'm')
    {
        printf("\n Enter age of male: \n");
        scanf("%d", &maleAge);
    }
    else if (gender == 'f')
    {
        printf("\n Enter age of Female: \n");
        scanf("%d", &femaleAge);
    }

    if (gender == 'f' && femaleAge >= 18 || gender == 'm' && maleAge >= 21)
    {
        printf("Eligible to marry");
    }
    else
    {
        printf("Not Eligible to marry");
    }
}