#include <stdio.h>
void main()
{
    int A = 56, B = 84;
    while (A != B)
    {
        if (A > B)
        {
            A = A - B;
        }
        else if (B > A)
        {
            B = B - A;
        }
        // printf("%d A, %d B", A, B);
    }
    printf("%d is HCF", A);
}