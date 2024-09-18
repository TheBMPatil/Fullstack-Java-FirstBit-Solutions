#include <stdio.h>
void main()
{
    int a = 10;
    int *p = &a;
    printf("%d", a);
    printf("\n%u", &a);
    printf("\n%d", *p);
    printf("\n%u", p);
}