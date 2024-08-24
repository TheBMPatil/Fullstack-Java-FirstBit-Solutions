#include <stdio.h>
void tempConvert();
void areaAndPerimetere();
void sumOfDigitAndReverse();
int evenOdd();
float salary();
void marriageEligibility();

float circumference();
float areaofCircle();
int perimeter();
int areaofRect();

void main()
{
    int ch;
    printf("Eneter your choice : \n");
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
        tempConvert();
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
        printf("Total Salary is : %f ", totalSalarysalary());
    }
    else if (ch == 6)
    {
        marriageEligibility();
    }
}
void tempConvert()
{
    int CL = 010;
    float fr = (9.0 / 5.0) * CL + 32;
    printf("Temparature In Celcius is :%d \n", CL);
    printf("Temparature In Feranhite is :%f", fr);
}
void areaAndPerimetere()
{
    printf("%.2f is area of Circle...! \n", areaofCircle());
    printf("\n");
    printf("%d is area of Rectangle...! \n", areaofRect());
    printf("\n");
    printf("%d is Perimeter of Rectangle..! \n", perimeter());
    printf("\n");
    printf("%.2f is Circumference of circle..! \n", circumference());
}
float areaofCircle()
{
    const float PI = 3.14;
    float radious = 9.0;
    float areaOfCir = PI * (radious * radious);
    return areaOfCir;
}
int areaofRect()
{
    int L = 15, W = 45;
    int areaOfRect = L * W;
    return areaOfRect;
}
int perimeter()
{
    int L = 15, W = 45;
    int areaOfRect = L * W;
    int periMeter = 2 * (L + W);
    return periMeter;
}
float circumference()
{
    const float PI = 3.14;
    float radious = 9.0;
    float Circumfer = 2.0 * PI * radious;
    return Circumfer;
}

void sumOfDigitAndReverse()
{
    int num = 234;
    int sum = 0;
    int rev = 0;

    int r1 = num % 10;
    int q1 = num / 10;

    sum += r1;
    rev = (rev * 10) + r1;

    r1 = q1 % 10;
    q1 /= 10;

    rev = (rev * 10) + r1;
    sum += r1;

    r1 = q1 % 10;
    q1 /= 10;

    rev = (rev * 10) + r1;
    sum += r1;

    printf("Sum of %d digits is: %d \n Also Reverse of num: %d", num, sum, rev);
}
int evenOdd()
{
    int num = 7;
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
    return totalSalary;
}
void marriageEligibility()
{
    int maleAge = 25, femaleAge = 29;
    char gender = 'f';

    if (gender == 'f' && femaleAge >= 18 || gender == 'm' && maleAge >= 21)
    {
        printf("Eligible to marry");
    }
    else
    {
        printf("Not Eligible to marry");
    }
}