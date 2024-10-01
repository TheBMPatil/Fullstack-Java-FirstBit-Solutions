#include <stdio.h>
void main()
{
    float L = 15.0;
    float B = 17.0;
    printf(":Area of shapes: \n");
    printf("Area of Rectangle: \n");
    float areaOfRecatangle = L * B;
    printf("L: %f, B: %f, Area: %f \n", L, B, areaOfRecatangle);

    printf("Area of CUBE: \n");
    L = 15.0;
    float areaOfCube = 6 * (L * L);
    printf("Side: %f, Area: %f \n", L, areaOfCube);

    printf("Area of Triangle: \n");
    L = 15.0;
    B = 12.3;
    float H = 13.7;
    float areaOfTriangel = L * B * H;
    printf("L: %f, H: %f, B: %f,  Area: %f \n", L, H, B, areaOfTriangel);
    
}