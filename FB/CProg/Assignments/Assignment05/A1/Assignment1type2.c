#include <stdio.h>
float tempConvert();
void areaAndPerimetere();
void sumOfDigitAndReverse();
int evenOdd();
float salary();
void marriageEligibility();
int sumOfDigits();
int reverseNum();
float circumference();
float areaofCircle();
int perimeter();
int areaofRect();

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
            printf("Temparature In Feranhite is :%.2f", tempConvert());
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
            if (evenOdd())
            {
                printf("Number is Even \n");
            }
            else
            {
                printf("Number is odd.");
            }
        }
        else if (ch == 5)
        {
            printf("Total Salary is : %f ", salary());
        }
        else if (ch == 6)
        {
            marriageEligibility();
        }
    }
}
float tempConvert()
{
    int CL;
    printf("Enter Teparature in Celcious :");
    scanf("%d", &CL);
    float fr = (9.0 / 5.0) * CL + 32;
    printf("Temparature In Celcius is :%d \n", CL);
    return fr;
}
void areaAndPerimetere()
{
    printf("What do you want to do brooo. \n");
    int ch;
    printf("1> Area of Circle\n");
    printf("2> Area of Reactangle\n");
    printf("3> Perimeter of Circle \n");
    printf("4> Circumference of Circle\n");
    scanf("%d", &ch);
    if (ch == 0 || ch > 4 || ch < 0)
    {
        printf("Invalid Choice broooo!!!");
    }
    else if (ch == 1)
    {
        printf("%.2f is area of Circle...! \n", areaofCircle());
    }
    else if (ch == 2)
    {
        printf("\n");
        printf("%d is area of Rectangle...! \n", areaofRect());
    }
    else if (ch == 3)
    {
        printf("\n");
        printf("%d is Perimeter of Rectangle..! \n", perimeter());
    }
    else if (ch == 4)
    {
        printf("\n");
        printf("%.2f is Circumference of circle..! \n", circumference());
    }
}
float areaofCircle()
{
    const float PI = 3.14;
    float radious;
    printf("\n Enter Radious Of Circle : \n");
    scanf("%f", &radious);
    float areaOfCir = PI * (radious * radious);
    return areaOfCir;
}
int areaofRect()
{
    int L, W;
    printf("\n Enter Length and Width of Reactangle : \n");
    scanf("%d%d", &L, &W);
    int areaOfRect = L * W;
    return areaOfRect;
}
int perimeter()
{
    int L, W;
    printf("\n Enter Length and Width of Reactangle : \n");
    scanf("%d%d", &L, &W);
    int periMeter = 2 * (L + W);
    return periMeter;
}
float circumference()
{
    const float PI = 3.14;
    float radious;
    printf("\n Enter Radious Of Circle : \n");
    scanf("%f", &radious);
    float Circumfer = 2.0 * PI * radious;
    return Circumfer;
}

void sumOfDigitAndReverse()
{
    printf("What do you Whant to do : \n");
    printf("1> Sum Of Digits of number: \n");
    printf("2> Reverse the number : \n");
    int ch;
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf(" \n %d is Sum of digits.\n", sumOfDigits());
    }
    else if (ch == 2)
    {
        printf(" \n %d is Reverse Number \n", reverseNum());
    }
    else
    {
        printf("Invalid Choice brooo!! \n");
    }
}
int sumOfDigits()
{
    printf("Enter a Number : \n");
    int num, sum = 0;
    scanf("%d", &num);
    for (num; num > 0; num /= 10)
    {
        sum += (num % 10);
    }
    return sum;
}
int reverseNum()
{
    printf("Enter a Number : \n");
    int num, rev = 0;
    scanf("%d", &num);
    for (num; num > 0; num /= 10)
    {
        rev = (rev * 10) + (num % 10);
    }
    return rev;
}
int evenOdd()
{
    int num;
    printf("\n Enter A Number : \n ");
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
    printf("\n Enter Base Salary :  \n");
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