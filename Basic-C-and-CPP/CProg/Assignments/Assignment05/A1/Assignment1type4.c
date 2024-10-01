#include <stdio.h>
float tempConvert(int);
int evenOdd(int);
void areaAndPerimetere();
float circumference(float);
float areaofCircle(int);
int perimeter(int, int);
int areaofRect(int, int);
void sumOfDigitAndReverse();
int sumOfDigits(int);
int reverseNum(int);

float salary(float);
int marriageEligibility(int, char);
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
            printf("Temparature In Feranhite is :%.2f", tempConvert(cel));
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
            (evenOdd(num)) ? printf("Number is Even \n") : printf("Number is odd. \n");
        }
        else if (ch == 5)
        {
            float baseSalary;
            printf("\n Enter Base Salary :  \n");
            scanf("%f", &baseSalary);
            printf("Total Salary is : %f ", salary(baseSalary));
        }
        else if (ch == 6)
        {
            int age;
            char gender;
            printf("\n Enter Your Gender (f/m): ");
            fflush(stdin);
            scanf("%c", &gender);
            printf("\n Enter age of Person: \n");
            scanf("%d", &age);
            (marriageEligibility(age, gender)) ? printf("Eligible to marry") : printf("Not Eligible to marry");
        }
    }
}
float tempConvert(int CL)
{
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
    int L, W;
    float rad;
    if (ch == 0 || ch > 4 || ch < 0)
    {
        printf("Invalid Choice broooo!!!");
    }
    else if (ch == 1)
    {
        printf("Enter Radious of Circle");
        scanf("%f", &rad);
        printf("%.2f is area of Circle...! \n", areaofCircle(rad));
    }
    else if (ch == 2)
    {
        printf("\n Enter Length and Width of Reactangle : \n");
        scanf("%d%d", &L, &W);
        printf("\n");
        printf("%d is area of Rectangle...! \n", areaofRect(L, W));
    }
    else if (ch == 3)
    {
        printf("\n Enter Length and Width of Reactangle : \n");
        scanf("%d%d", &L, &W);
        printf("\n");
        printf("%d is Perimeter of Rectangle..! \n", perimeter(L, W));
    }
    else if (ch == 4)
    {
        printf("Enter Radious of Circle");
        scanf("%f", &rad);
        printf("\n");
        printf("%.2f is Circumference of circle..! \n", circumference(rad));
    }
}
float areaofCircle(int radious)
{
    const float PI = 3.14;
    float areaOfCir = PI * (radious * radious);
    return areaOfCir;
}
int areaofRect(int L, int W)
{
    int areaOfRect = L * W;
    return areaOfRect;
}
int perimeter(int L, int W)
{
    int periMeter = 2 * (L + W);
    return periMeter;
}
float circumference(float radious)
{
    const float PI = 3.14;
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
    int num;
    if (ch == 1)
    {
        printf("Enter a Number : \n");
        scanf("%d", &num);
        printf(" \n %d is Sum of digits.\n", sumOfDigits(num));
    }
    else if (ch == 2)
    {
        printf("Enter a Number : \n");
        scanf("%d", &num);
        printf(" \n %d is Reverse Number \n", reverseNum(num));
    }
    else
    {
        printf("Invalid Choice brooo!! \n");
    }
}
int sumOfDigits(int num)
{
    int sum = 0;
    for (num; num > 0; num /= 10)
    {
        sum += (num % 10);
    }
    return sum;
}
int reverseNum(int num)
{
    int rev = 0;
    for (num; num > 0; num /= 10)
    {
        rev = (rev * 10) + (num % 10);
    }
    return rev;
}
int evenOdd(int num)
{

    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float salary(float baseSalary)
{
    float totalSalary;
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
int marriageEligibility(int age, char gender)
{
    return ((gender == 'f' && age >= 18 || gender == 'm' && age >= 21) ? 1 : 0);
}