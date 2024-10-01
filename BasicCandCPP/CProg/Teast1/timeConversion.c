#include <stdio.h>
void main()
{
    int tH, tM, tS;
    printf("Enter Time in HH MM SS Format : \n");
    scanf("%d%d%d", &tH, &tM, &tS);
    int totalSec = tS;
    int temp = tH * 60;
    tM += temp;

    totalSec += tM * 60;

    printf("%d", totalSec);
}