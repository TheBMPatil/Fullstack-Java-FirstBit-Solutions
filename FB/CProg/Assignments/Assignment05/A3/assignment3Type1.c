#include <stdio.h>
void OneToTen();
void tableOfNum();
void sumOfNumdinrange();
void isPrime();
void armstrong();
void perfect();
void factorial();
void strong();
void palindrome();
void sumOfFirstAndLastDigit();
void main()
{
    int ch;
    printf("Eneter your choice : \n");
    printf("1) one to ten: \n");
    printf("2) Table of Num: \n");
    printf("3) Sum of nums in range : \n");
    printf("4) is prime: \n");
    printf("5) Armstrong: \n");
    printf("6) Perfect No: \n");
    printf("7) Factorial: \n");
    printf("8) Strong Num: \n");
    printf("9) Palindrome: \n");
    printf("10) Sum Of Frirst and Last Digit: \n");
    scanf("%d", &ch);
    if (ch > 10 || ch <= 0)
    {
        printf("Inavalid Choice !");
    }
    else if (ch == 1)
    {
        OneToTen();
    }
    else if (ch == 2)
    {
        tableOfNum();
    }
    else if (ch == 3)
    {
        sumOfNumdinrange();
    }
    else if (ch == 4)
    {
        isPrime();
    }
    else if (ch == 5)
    {
        armstrong();
    }
    else if (ch == 6)
    {
        perfect();
    }
    else if (ch == 7)
    {
        factorial();
    }
    else if (ch == 8)
    {
        strong();
    }
    else if (ch == 9)
    {
        palindrome();
    }
    else if (ch == 10)
    {
        sumOfFirstAndLastDigit();
    }
}
void OneToTen()
{
    int num = 1;
    while (num <= 10)
    {
        printf("%d \n", num);
        num++;
    }
    printf("%d is exit value of num.", num);
}
void tableOfNum()
{
    int num;
    printf("Enter a number. \n");
    scanf("%d", &num);
    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d \n", num, i, num * i);
        i++;
    }
    printf("Exit value of i = %d", i);
}
void sumOfNumdinrange()
{
    int start, end;
    printf("Enter starting range :");
    scanf("%d", &start);
    // printf("\n");
    printf("Enter Ending range : ");
    scanf("%d", &end);
    int sum = 0;
    int temp = start;

    while (temp <= end)
    {
        sum += temp;
        temp++;
    }
    printf("Sum of numbers between %d to %d is = %d", start, end, sum);
}
void isPrime()
{
    printf("Enter a number to cheack Prime or Not :");
    int num;
    scanf("%d", &num);
    int i = 2, cnt = 0;
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            cnt++;
        }
        i++;
    }
    if (cnt > 0 || num == 1)
    {
        printf("num %d is not Prime. \n", num);
    }
    else
    {
        printf("num %d is  Prime. \n", num);
    }

    printf("Exit value of I is : %d", i);
}
void armstrong()
{
    int num, rem = 0;
    int armN = 0;
    printf("Enter A number to cheack armstrong. : ");
    scanf("%d", &num);
    int temp = num;
    while (temp >= 0)
    {
        rem = temp % 10;
        armN += rem * rem * rem;
        temp /= 10;
    }
    if (armN == num)
    {
        printf("Number %d is Armstrong Number.", num);
    }
    else
    {
        printf("Number %d is Armstrong Number.", num);
    }
}
void perfect()
{
    printf("Enter A number :");
    int num, i = 1, cnt = 0, sumOfDivisor = 0;
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            sumOfDivisor += i;
            cnt++;
        }
        i++;
    }
    if (sumOfDivisor == num)
    {
        printf("Number %d is perfect number", num);
    }
    else
    {
        printf("%d is not perfect number", num);
    }
}
void factorial()
{
    int num;
    int Fact = 1;
    printf("Enter A number :");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid number!");
    }
    else if (num > 0)
    {
        // while (num)
        // {
        //     Fact *= num;
        //     num--;
        // }

        for (int i = 2; i <= num; i++)
            Fact *= i;
    }
    printf("%d is factorial of entered number", Fact);
}
void strong()
{
    printf("Enter a number : ");
    int num;
    scanf("%d", &num);
    int temp = num;
    int FcatSum = 0;

    while (temp != 0)
    {
        int rem = temp % 10;
        int fact = 1;
        if (rem > 0)
        {
            while (rem)
            {
                fact *= rem;
                rem--;
            }
            FcatSum += fact;
            temp /= 10;
        }
        else
        {
            FcatSum += fact;
            temp /= 10;
        }
    }
    // printf("%d is factsum.", FcatSum);
    if (FcatSum == num)
    {
        printf("%d is a strong number", num);
    }
    else
    {
        printf("%d is not a strong number.", num);
    }
}
void palindrome()
{
    printf("Enter A number :");
    int num;
    scanf("%d", &num);
    int temp = num;
    int rev = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }
    if (rev == num)
    {
        printf("%d is a palindrome Number.", num);
    }
    else
    {
        printf("%d Is not a palindrome number", num);
    }
}
void sumOfFirstAndLastDigit()
{
    printf("Enter A number : ");
    int num;
    scanf("%d", &num);
    int lastDigit, firstDigit;

    lastDigit = num % 10;
    firstDigit = num / 10;

    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }
    int sum = firstDigit + lastDigit;
    printf("%d is sum of first and last digit of given numbr %d.", sum, num);
}