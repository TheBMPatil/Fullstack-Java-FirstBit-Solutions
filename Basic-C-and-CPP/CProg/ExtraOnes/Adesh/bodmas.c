#include <stdio.h>

int main()
{

    // OP :20

    int y = 5;
    int z = y + (y = 10);
    printf("%d", z);
    return 0;
}