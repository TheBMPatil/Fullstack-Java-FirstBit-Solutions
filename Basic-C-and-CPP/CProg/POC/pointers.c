#include <stdio.h>
void main()
{
    double a = 10;
    double *x = &a;
    printf("\n %p", x);
    // *(x + 1) = 20;
    *x++;
    printf("\n %p", x);
}