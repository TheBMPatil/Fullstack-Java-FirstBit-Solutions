#include <stdio.h>
void main()
{
    int n = 2, L = 10, B = 10;
    float perim = (L + B) * 2;
    float LengthOfWire = perim * n;

    printf("The length of wire is: %f", LengthOfWire);
}