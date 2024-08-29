#include <stdio.h>
void swaPtr(int *, int *);
void main()
{
    int A, B;
    printf("Enter A :\n");
    scanf("%d", &A);
    printf("Enter B :\n");
    scanf("%d", &B);
    printf("\n Original values Before Swap : A = %d , B= %d \n", A, B);

    swaPtrWithot(&A, &B);
    printf("Original values After Swap : A = %d , B= %d \n", A, B);
}
void swaPtr(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swaPtrWithot(int *x, int *y)
{
    printf("\n || %d = y ||\n", y);
    printf("\n || %d = x ||\n", x);
    *x = *x + *y;
    // printf("%d *x \n ", *x);
    *y = *x - *y;
    // printf("%d *y \n ", *y);
    *x = *x - *y;
    // printf("%d *x \n ", *x);
}