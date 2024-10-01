#include <stdio.h>
void OneToTen();
void tableOfNum();
int sumOfNumdinrange();
int isPrime();
int armstrong();
int perfect();
int factorial();
int strong();
int palindrome();
int sumOfFirstAndLastDigit();
void main()
{
    int ch = 1;
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
            printf("\n %d : is sum", sumOfNumdinrange());
        }
        else if (ch == 4)
        {
            isPrime() ? printf("num is  Prime. \n") : printf("num is not Prime. \n");
        }
        else if (ch == 5)
        {
            (armstrong()) ? printf("Number is Armstrong Number.") : printf("Number is not Armstrong Number.");
        }
        else if (ch == 6)
        {
            perfect() ? printf(" perfect number") : printf("not perfect number");
        }
        else if (ch == 7)
        {
            printf("%d is factorial of entered number", factorial());
        }
        else if (ch == 8)
        {
            strong() ? printf("strong number") : printf("Not strong number");
        }
        else if (ch == 9)
        {
            palindrome() ? printf("it is Palindrome Number.") : printf("Not palindrome Number.");
        }
        else if (ch == 10)
        {
            printf("%d is sum of first and last digit of given numbr.", sumOfFirstAndLastDigit());
        }
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
int sumOfNumdinrange()
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
    return sum;
    // printf("Sum of numbers between %d to %d is = %d", start, end, sum);
}
int isPrime()
{
    printf("Enter a number to cheack Prime or Not :");
    int num;
    scanf("%d", &num);
    int i = 2, cnt = 0;
    while (i <= num / 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
        i++;
    }
    printf("Exit value of I is : %d", i);
    return 1;
}
int armstrong()
{
    int num, rem = 0;
    int armN = 0;
    printf("Enter A 3 digit number to cheack armstrong. : ");
    scanf("%d", &num);
    int temp = num;
    while (temp)
    {
        rem = temp % 10;
        armN += rem * rem * rem;
        temp /= 10;
    }
    if ((armN == num))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int perfect()
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
        return 1;
    }
    else
    {
        return 0;
    }
}
int factorial()
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
    return Fact;
}
int strong()
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
        return 1;
    }
    else
    {
        return 0;
    }
}
int palindrome()
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
        return 1;
    }
    else
    {
        return 0;
    }
}
int sumOfFirstAndLastDigit()
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
    return sum;
}