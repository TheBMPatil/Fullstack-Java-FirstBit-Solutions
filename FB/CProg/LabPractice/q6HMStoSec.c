#include <stdio.h>
void main()
{
    int H = 2, M = 40, S = 5;
    M += (H * 60);
    int newS = S + (M * 60);
    printf("Time in HMS is: %dH,%dM,%dS and after conv in secs is : %dS", H, M, S, newS);
}