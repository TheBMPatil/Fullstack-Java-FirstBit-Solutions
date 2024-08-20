#include <stdio.h>
void main()
{

    int n, fib1 = 0, fib2 = 1, fibNext;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fib1);
        fibNext = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibNext;
    }
    printf("\n");
}