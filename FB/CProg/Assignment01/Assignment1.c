#include <stdio.h>
void tempConvert();
void areaAndPerimetere();
void sumOfDigitAndReverse();
void evenOdd();
void salary();
void marriageEligibility();

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
void tempConvert()
{
    int CL = 010;
    float fr = (9.0 / 5.0) * CL + 32;
    printf("Temparature In Celcius is :%d \n", CL);
    printf("Temparature In Feranhite is :%f", fr);
}
void areaAndPerimetere()
{
    int L = 15, W = 45;
    int areaOfRect = L * W;
    int periMeter = 2 * (L + W);
    printf("Length of Rectangle: %d, Width: %d \nArea of Reactangle: %d \n", L, W, areaOfRect);
    printf("Perimeter of Reactangle: %d \n ", periMeter);

    printf("\n");

    float radious = 9.0;
    const float PI = 3.14;
    float Circumference = 2.0 * PI * radious;
    float areaOfCircle = PI * (radious * radious);
    printf("Radious of circle is: %f \nCircumference of that circle is: %f \n", radious, Circumference);
    printf("Area of that circle is: %f \n", areaOfCircle);
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
        printf("Number %d is Even.", num);
    }
    else
    {
        printf("Number %d is Odd.", num);
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
    printf("Total Salary for bsae %f is : %f ", baseSalary, totalSalary);
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