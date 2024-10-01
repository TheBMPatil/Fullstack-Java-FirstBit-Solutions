#include <stdio.h>
void main()
{
    printf("|| Simple intrest Calculator ||\n");
    simpleIntrestCalc();
}
void simpleIntrestCalc()
{
    float pR, rOI, T;
    printf("\nEnter the principle amount :");
    scanf("%f", &pR);
    printf("\nEnter the Rate of Intrest :");
    scanf("%f", &rOI);
    printf("\nEnter the Time in Years:");
    scanf("%f", &T);

    float sI = ((pR * rOI * T) / 100);
    printf("\n%.2f :is Simple intrest for your amount : %.2f and time: %.2f years with rate of Intrest %.1f%%", sI, pR, T, rOI);
}