#include <stdio.h>
void main()
{
    int A = 10, B = 20, temp;
    printf("Value of A is :%d, and B is : %d before swapping \n", A, B);
    temp = A;
    B = A;
    B = temp;
    printf("Value of A is :%d, and B is : %d After swapping", A, B);
}