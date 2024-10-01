#include <stdio.h>
void OneToTen(int);
void tableOfNum(int);
void sumOfNumdinrange(int, int);
void isPrime(int);
void armstrong(int);
void perfect(int);
void factorial(int);
void strong(int);
void palindrome(int);
void sumOfFirstAndLastDigit(int);
void main()
{
    int ch = 1;
    int num = 1;
    while (ch)
    {

        printf("\n Eneter your choice : \n");
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
        printf("0) Exit : \n");
        scanf("%d", &ch);
        if (ch > 10 || ch <= 0)
        {
            printf("Inavalid Choice !");
        }
        else if (ch == 1)
        {
            OneToTen(num);
        }
        else if (ch == 2)
        {
            printf("Enter a number. \n");
            scanf("%d", &num);
            tableOfNum(num);
        }
        else if (ch == 3)
        {
            int start, end;
            printf("Enter starting range :");
            scanf("%d", &start);
            // printf("\n");
            printf("Enter Ending range : ");
            scanf("%d", &end);
            sumOfNumdinrange(start, end);
        }
        else if (ch == 4)
        {
            printf("Enter a number to cheack Prime or Not :");
            scanf("%d", &num);
            isPrime(num);
        }
        else if (ch == 5)
        {
            printf("Enter A number to cheack armstrong. : ");
            scanf("%d", &num);
            armstrong(num);
        }
        else if (ch == 6)
        {
            printf("Enter A number :");
            scanf("%d", &num);
            perfect(num);
        }
        else if (ch == 7)
        {
            printf("Enter A number :");
            scanf("%d", &num);
            factorial(num);
        }
        else if (ch == 8)
        {
            printf("Enter a number : ");
            scanf("%d", &num);
            strong(num);
        }
        else if (ch == 9)
        {
            printf("Enter a number : ");
            scanf("%d", &num);
            palindrome(num);
        }
        else if (ch == 10)
        {
            printf("Enter A number : ");
            scanf("%d", &num);
            sumOfFirstAndLastDigit(num);
        }
    }
}
void OneToTen(num)
{

    while (num <= 10)
    {
        printf("%d \n", num);
        num++;
    }
    printf("%d is exit value of num.", num);
}
void tableOfNum(int num)
{

    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d \n", num, i, num * i);
        i++;
    }
    printf("Exit value of i = %d", i);
}
void sumOfNumdinrange(int start, int end)
{

    int sum = 0;
    int temp = start;

    while (temp <= end)
    {
        sum += temp;
        temp++;
    }
    printf("Sum of numbers between %d to %d is = %d", start, end, sum);
}
void isPrime(int num)
{
    int i = 2, cnt = 0;
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            cnt = 1;
            break;
        }
        i++;
    }
    (cnt > 0 || num == 1) ? printf("num %d is not Prime. \n", num) : printf("num %d is  Prime. \n", num);

    printf("Exit value of I is : %d", i);
}
void armstrong(int num)
{
    int rem = 0;
    int armN = 0;
    int temp = num;
    while (temp)
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
        printf("Number %d is not Armstrong Number.", num);
    }
}
void perfect(int num)
{
    int i = 1, cnt = 0, sumOfDivisor = 0;
    while (i < num)
    {
        if (num % i == 0)
        {
            sumOfDivisor += i;
            cnt++;
        }
        i++;
    }
    (sumOfDivisor == num) ? printf("Number %d is perfect number", num) : printf("%d is not perfect number", num);
}

void factorial(int num)
{
    int Fact = 1;
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
void strong(int num)
{

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
void palindrome(int num)
{
    int temp = num;
    int rev = 0;
    while (temp)
    {
        // printf("\n %d temp ", temp);
        int rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }
    (rev == num) ? printf("%d is a palindrome Number.", num) : printf("%d Is not a palindrome number", num);
}
void sumOfFirstAndLastDigit(int num)
{
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