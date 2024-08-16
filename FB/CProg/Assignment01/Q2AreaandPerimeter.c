#include <stdio.h>
void main()
{
    int L = 15, W = 45;
    int areaOfRect = L * W;
    int periMeter = 2 * (L + W);
    printf("Length of Rectangle: %d, Width: %d \nArea of Reactangle: %d \n", L, W, areaOfRect);
    printf("Perimeter of Reactangle: %d \n ", periMeter);

    printf("\n");

    float radious = 9.0;
    const float PI = 3.14;
    float Circumference = 2.0 * PI * radious;
    float areaOfCircle = PI * (radious * radious);
    printf("Radious of circle is: %f \nCircumference of that circle is: %f \n", radious, Circumference);
    printf("Area of that circle is: %f \n", areaOfCircle);
}