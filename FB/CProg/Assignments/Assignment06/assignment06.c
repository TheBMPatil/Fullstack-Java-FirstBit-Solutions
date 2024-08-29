#include <stdio.h>
// Do all type 3 (with parameter, w/o return type) function programs using pointer.
void assignment01();
void assignment02();
void assignment03();
// void assignment04();

void areaAndPerimetere();
void sumOfDigitAndReverse();
void marriageEligibility();
void calculator();
void UseChoice();

void tempConvert(int *);
void areaofRect(int *, int *);
void evenOdd(int *);
void circumference(float *);
void areaofCircle(float *);
void perimeter(int *, int *);
void salary(float *);
void discount(float *);
void addition(int *, int *);
void substraction(int *, int *);
void multiplication(int *, int *);
void division(int *, int *);
void greatOfThree(int *, int *, int *);
void tableOfNum(int *);
void sumOfFirstAndLastDigit(int *);
void sumOfDigits(int *);
void reverseNum(int *);
void discountStudent(float *);
void OneToTen(int *);
void sumOfNumdinrange(int *, int *);
void isPrime(int *);

void armstrong(int *);
void perfect(int *);
void factorial(int *);
void strong(int *);
void palindrome(int *);

void main()
{
    printf("|| Pointers Assignment 06 ||\n");
    int ch = 1;
    while (ch)
    {
        printf(" \t \t \t Choices \n");
        printf(" \t1) Assignment 01 Questions. \t2) Assignment 02 Questions. \t3) Assignment 03 Questions.  \n");
        printf("\n Enter Zero 0 to exit : \n");
        printf("\nEnter your choice : \n");

        scanf("%d", &ch);
        if (ch < 0 && ch > 20)
        {
            printf("\n Invalid choice brooo...! \n");
        }
        else if (ch == 1)
        {
            assignment01();
        }
        else if (ch == 2)
        {
            assignment02();
        }
        else if (ch == 3)
        {
            assignment03();
        }
        // else if (ch == 4)
        // {
        //     assignment04();
        // }
    }
}
void assignment01()
{
    int ch = 1, tempCl;
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
            printf("Enter temparature in Celcious : ");
            scanf("%d", &tempCl);
            tempConvert(&tempCl);
            printf("%d original temp", tempCl);
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
            evenOdd(&num);
        }
        else if (ch == 5)
        {
            float baseSalary;
            printf("\n Enter Base Salary :  \n");
            scanf("%f", &baseSalary);
            salary(&baseSalary);
        }
        else if (ch == 6)
        {
            marriageEligibility();
        }
    }
}
void assignment02()
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
            float Op;
            printf("Enter Original Price broo:");
            scanf("%f", &Op);
            discount(&Op);
        }
        else if (ch == 2)
        {
            printf("Gretest of Three Numbers \n");
            // get value of a b c from user
            printf("\n Enter 3 Numbers :");
            int A, B, C;
            scanf("%d%d%d", &A, &B, &C);
            greatOfThree(&A, &B, &C);
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
            float price, finalprice;
            printf("Enter Price of the product : \n");
            scanf("%f", &price);
            discountStudent(&price);
        }
        else if (ch == 0)
        {
            break;
        }
    }
}
void assignment03()
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
            OneToTen(&num);
        }
        else if (ch == 2)
        {
            printf("Enter a number. \n");
            scanf("%d", &num);
            tableOfNum(&num);
        }
        else if (ch == 3)
        {
            int start, end;
            printf("Enter starting range :");
            scanf("%d", &start);
            // printf("\n");
            printf("Enter Ending range : ");
            scanf("%d", &end);
            sumOfNumdinrange(&start, &end);
        }
        else if (ch == 4)
        {
            printf("Enter a number to cheack Prime or Not :");
            scanf("%d", &num);
            isPrime(&num);
        }
        else if (ch == 5)
        {
            printf("Enter A number to cheack armstrong. : ");
            scanf("%d", &num);
            armstrong(&num);
        }
        else if (ch == 6)
        {
            printf("Enter A number :");
            scanf("%d", &num);
            perfect(&num);
        }
        else if (ch == 7)
        {
            printf("Enter A number :");
            scanf("%d", &num);
            factorial(&num);
        }
        else if (ch == 8)
        {
            printf("Enter a number : ");
            scanf("%d", &num);
            strong(&num);
        }
        else if (ch == 9)
        {
            printf("Enter a number : ");
            scanf("%d", &num);
            palindrome(&num);
        }
        else if (ch == 10)
        {
            printf("Enter A number : ");
            scanf("%d", &num);
            sumOfFirstAndLastDigit(&num);
        }
    }
}
// void assignment04()
// {
// }
void tempConvert(int *x)
{

    float fr = (9.0 / 5.0) * (*x) + 32;
    printf("Temparature In feranhite is :%.2f \n", fr);
}

void areaAndPerimetere()
{
    printf("What do you want to do brooo. \n");
    int ch;
    float rad;
    int L, W;
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
        printf("Enter Radious of Circle");
        scanf("%f", &rad);
        areaofCircle(&rad);
    }
    else if (ch == 2)
    {
        printf("\n");

        printf("\n Enter Length and Width of Reactangle : \n");
        scanf("%d%d", &L, &W);
        areaofRect(&L, &W);
    }
    else if (ch == 3)
    {
        printf("\n");

        printf("\n Enter Length and Width of Reactangle : \n");
        scanf("%d%d", &L, &W);
        perimeter(&L, &W);
    }
    else if (ch == 4)
    {

        printf("Enter Radious of Circle");
        scanf("%f", &rad);
        circumference(&rad);
    }
}
void areaofCircle(float *rad)
{
    const float PI = 3.14;
    float areaOfCir = PI * ((*rad) * (*rad));
    printf("\n %.2f is area of Circle. \n", areaOfCir);
}
void circumference(float *rad)
{
    const float PI = 3.14;
    float Circumfer = 2.0 * PI * (*rad);
    printf("\n %f is circumference of the circle.", Circumfer);
}
void areaofRect(int *L, int *W)
{

    printf("%d is area of Rectangle: ", (*L) * (*W));
}
void perimeter(int *L, int *W)
{

    printf("\n %d is perimeter of Rectangle. \n", (2 * ((*L) + (*W))));
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
        sumOfDigits(&num);
    }
    else if (ch == 2)
    {
        reverseNum(&num);
    }
    else
    {
        printf("Invalid Choice brooo!! \n");
    }
}
void sumOfDigits(int *num)
{
    int sum = 0;
    for ((*num); (*num) > 0; (*num) /= 10)
    {
        sum += ((*num) % 10);
    }
    printf("\n %d is A Sum Of digits of number. \n", sum);
}
void reverseNum(int *num)
{

    int rev = 0;

    for ((*num); (*num) > 0; (*num) /= 10)
    {
        rev = (rev * 10) + ((*num) % 10);
    }
    printf("\n %d is Reverse Number. \n", rev);
}
void evenOdd(int *num)
{
    if ((*num) % 2 == 0)
    {
        printf("\n Number is Even! \n");
    }
    else
    {
        printf("\n Number is odd! \n");
    }
}
void salary(float *baseSalary)
{

    float DA, TA, HRA;
    if ((*baseSalary) <= 5000)
    {
        DA = 0.10 * (*baseSalary);
        TA = 0.20 * (*baseSalary);
        HRA = 0.25 * (*baseSalary);
    }
    else
    {
        DA = 0.15 * (*baseSalary);
        TA = 0.25 * (*baseSalary);
        HRA = 0.30 * (*baseSalary);
    }

    printf("\n %.4f is your Total Salary \n", (DA + TA + HRA + (*baseSalary)));
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

void discount(float *Op)
{

    float finalPrice;
    if ((*Op) <= 1000)
    {
        finalPrice = (*Op) - (0.05 * (*Op));
        printf("%.2f is final price with 5%% discount on original price %.2f ", finalPrice, (*Op));
    }
    else if ((*Op) <= 5000)
    {
        finalPrice = (*Op) - (0.10 * (*Op));
        printf("%.2f is final price with 10%% discount on original price %.2f ", finalPrice, (*Op));
    }
    else if ((*Op) <= 10000)
    {
        finalPrice = (*Op) - (0.20 * (*Op));
        printf("%.2f is final price with 20%% discount on original price %.2f  ", finalPrice, (*Op));
    }
    else if ((*Op) > 10000)
    {
        finalPrice = (*Op) - (0.25 * (*Op));
        printf("%.2f is final price with 25%% discount on original price %.2f ", finalPrice, (*Op));
    }
}

void calculator()
{
    printf("Enetr your Choice: \n");
    printf("A Addition \n");
    printf("S Substraction \n");
    printf("M Multiplication \n");
    printf("D Dividion \n");
    char op = getch();
    int A, B;

    if (op == 'A')
    {
        printf("Chosen Operation is Addition.. \n ");
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        addition(&A, &B);
    }
    else if (op == 'S')
    {
        printf("Chosen Operation is Substraction.. \n ");
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        substraction(&A, &B);
    }
    else if (op == 'M')
    {
        printf("Chosen Operation is Multiplication.. \n ");
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        multiplication(&A, &B);
    }
    else if (op == 'D')
    {
        printf("Enter Two numbers : ");
        scanf("%d%d", &A, &B);
        printf("Chosen Operation is Division.. \n ");
        division(&A, &B);
    }
}

void addition(int *A, int *B)
{
    printf("\n %d is a Addition.", ((*A) + (*B)));
}

void division(int *A, int *B)
{

    if (A < B)
    {
        printf("\n %d is Division. \n", ((*B) / (*A)));
    }
    else
    {
        printf("\n %d is Division. \n", ((*A) / (*B)));
    }
}

void substraction(int *A, int *B)
{

    printf("\n %d is Substraction. \n", ((*B) - (*A)));
}

void multiplication(int *A, int *B)
{
    printf("\n %d is a Multiplication.", ((*A) * (*B)));
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
        int num;
        printf("Enter A number to check Even or Odd \n");
        scanf("%d", &num);
        evenOdd(&num);
    }
    else if (choice == 'S')
    {
        printf("Salary calculation \n");
        float baseSalary;
        printf("Enter Base salary: \n");
        scanf("%f", &baseSalary);
        salary(&baseSalary);
    }
    else if (choice == 'G')
    {
        printf("Gretest of Three Numbers \n");
        // get value of a b c from user
        printf("\n Enter 3 Numbers :");
        int A, B, C;
        scanf("%d%d%d", &A, &B, &C);
        greatOfThree(&A, &B, &C);
    }
}
void greatOfThree(int *A, int *B, int *C)
{
    printf("%d is the greatest.\n", (*A) > (*B) && (*A) > (*C) ? (*A) : ((*B) > (*C) ? (*B) : (*C)));
}
void discountStudent(float *price)
{
    float finalprice;
    printf("Are you a Student ? (Y/N) \n");
    char std = getch();
    if (std == 'Y')
    {
        if ((*price) >= 500)
        {
            finalprice = (*price) - ((*price) * 0.20);
        }
        else
        {

            finalprice = (*price) - ((*price) * 0.10);
        }
    }
    else if (std == 'N' && (*price) > 600)
    {
        finalprice = (*price) - ((*price) * 0.15);
    }
    else
    {
        finalprice = (*price);
    }
    printf("Final price is : %.2f", finalprice);
}

void OneToTen(int *num)
{

    while ((*num) <= 10)
    {
        printf("%d \n", (*num));
        (*num)++;
    }
    printf("%d is exit value of num.", (*num));
}
void tableOfNum(int *num)
{

    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d \n", (*num), i, (*num) * i);
        i++;
    }
    printf("Exit value of i = %d", i);
}
void sumOfNumdinrange(int *start, int *end)
{

    int sum = 0;
    int temp = (*start);

    while (temp <= (*end))
    {
        sum += temp;
        temp++;
    }
    printf("Sum of numbers between %d to %d is = %d", (*start), (*end), sum);
}
void isPrime(int *num)
{
    int i = 2, cnt = 0;
    while (i <= (*num) / 2)
    {
        if ((*num) % i == 0)
        {
            cnt = 1;
            break;
        }
        i++;
    }
    (cnt > 0 || (*num) == 1) ? printf("num %d is not Prime. \n", (*num)) : printf("num %d is  Prime. \n", (*num));

    printf("Exit value of I is : %d", i);
}
void armstrong(int *num)
{
    int rem = 0;
    int armN = 0;
    int temp = (*num);
    while (temp)
    {
        rem = temp % 10;
        armN += rem * rem * rem;
        temp /= 10;
    }
    if (armN == (*num))
    {
        printf("Number %d is Armstrong Number.", (*num));
    }
    else
    {
        printf("Number %d is not Armstrong Number.", (*num));
    }
}
void perfect(int *num)
{
    int i = 1, cnt = 0, sumOfDivisor = 0;
    while (i < (*num))
    {
        if ((*num) % i == 0)
        {
            sumOfDivisor += i;
            cnt++;
        }
        i++;
    }
    (sumOfDivisor == (*num)) ? printf("Number %d is perfect number", (*num)) : printf("%d is not perfect number", (*num));
}

void factorial(int *num)
{
    int Fact = 1;
    if ((*num) < 0)
    {
        printf("Invalid number!");
    }
    else if ((*num) > 0)
    {
        // while (num)
        // {
        //     Fact *= num;
        //     num--;
        // }

        for (int i = 2; i <= (*num); i++)
            Fact *= i;
    }
    printf("%d is factorial of entered number", Fact);
}
void strong(int *num)
{

    int temp = (*num);
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
    if (FcatSum == (*num))
    {
        printf("%d is a strong number", (*num));
    }
    else
    {
        printf("%d is not a strong number.", (*num));
    }
}
void palindrome(int *num)
{
    int temp = (*num);
    int rev = 0;
    while (temp)
    {
        // printf("\n %d temp ", temp);
        int rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }
    (rev == (*num)) ? printf("%d is a palindrome Number.", (*num)) : printf("%d Is not a palindrome number", (*num));
}
void sumOfFirstAndLastDigit(int *num)
{
    int lastDigit, firstDigit;
    lastDigit = (*num) % 10;
    firstDigit = (*num) / 10;

    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }
    int sum = firstDigit + lastDigit;
    printf("%d is sum of first and last digit of given numbr %d.", sum, num);
}