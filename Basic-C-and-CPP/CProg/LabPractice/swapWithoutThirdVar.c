#include <stdio.h>
void main()
{
    printf("Swapping two numbers \n");

    int A = 10, B = 20;
    printf("Before Swapping Value of A= %d and B= %d \n", A, B);

    A = A + B;
    B = A - B;
    A = A - B;
    printf("After Swapping Value of A= %d and B= %d ", A, B);

    // OP : Swapping two numbers
    // Before Swapping Value of A= 10 and B= 20
    // After Swapping Value of A= 20 and B= 10
}