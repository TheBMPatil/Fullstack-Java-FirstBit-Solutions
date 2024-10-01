#include <stdio.h>
void tempConvert();
void areaAndPerimetere();
void sumOfDigitAndReverse();
void evenOdd();
void salary();
void marriageEligibility();
void circumference();
void areaofCircle();
void perimeter();
void areaofRect();

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
        printf("0) Enter zero to exit: \n");

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
            evenOdd();
        }
        else if (ch == 5)
        {
            salary();
        }
        else if (ch == 6)
        {
            marriageEligibility();
        }
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
    areaofCircle();
    printf("\n");
    areaofRect();
    printf("\n");
    perimeter();
    printf("\n");
    circumference();
}
void areaofCircle()
{
    const float PI = 3.14;
    float radious = 9.0;
    float areaOfCir = PI * (radious * radious);
    printf("%f is area of circle", areaOfCir);
}
void areaofRect()
{
    int L = 15, W = 45;
    int areaOfRect = L * W;
    printf("%d is area of rect", areaOfRect);
}
void perimeter()
{
    int L = 15, W = 45;
    int areaOfRect = L * W;
    int periMeter = 2 * (L + W);
    printf("\n %d is perimeter of Reactangle. \n ", periMeter);
}
void circumference()
{
    const float PI = 3.14;
    float radious = 9.0;
    float Circumfer = 2.0 * PI * radious;
    printf("\n %f is circumference \n", Circumfer);
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
void evenOdd()
{
    int num = 7;
    if (num % 2 == 0)
    {
        printf("Number is even \n");
    }
    else
    {
        printf("Number is odd \n");
    }
}
void salary()
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
    printf("%f is total salary.", totalSalary);
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