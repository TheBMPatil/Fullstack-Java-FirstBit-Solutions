#include <stdio.h>
void main()
{
    printf("++++++++++++++++++++++++++++++//// Arithmatic operations. ////++++++++++++++++++++++++++++++ \n");
    printf("+++Addition+++ \n");
    int A = 10;
    int B = 20;
    int sum;
    sum = A + B;
    printf("The Sum of A: %d and B: %d is = %d \n", A, B, sum);

    printf("---Substraction--- \n");
    sum = A - B;
    printf("The Substraction of A: %d and B: %d is = %d \n", A, B, sum);

    printf("---Multiplication--- \n");
    sum = A * B;
    printf("The Multiplication of A: %d and B: %d is = %d \n", A, B, sum);

    printf("---Devision--- \n");
    sum = A / B;
    printf("The devision of A: %d and B: %d is = %d  \n", A, B, sum);

    printf("---MOD--- \n");
    A = 17;
    B = 2;
    sum = A % B;
    printf("The MOD of A: %d and B: %d is = %d  \n", A, B, sum);
}