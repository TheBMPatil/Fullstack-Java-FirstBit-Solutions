#include <stdio.h>
void main()
{
    int H, M, S;
    H = 12;
    M = 320;
    S = 725;

    printf("given time is : %d h, %d m, %d s \n", H, M, S);

    int newM = S / 60;
    int newS = (S % 60);

    H += (newM + M) / 60;
    newM = (newM + M) % 60;

    printf("Converted time is: %d h, %d m, %d s", H, newM, newS);
}