#include <stdio.h>
#include <stdlib.h>
typedef struct Complex
{
    double real;
    double imaginary;
} Complex;

Complex getNumsByVal()
{
    Complex c;
    printf("Enter Real Part :");
    scanf("%d", &c.real);
    printf("Enter Imaginory Part :");
    scanf("%d", &c.imaginary);
    return c;
}

void showNumsByVal(Complex c)
{
    printf("\nYour imaginary no is : %d+%di", c.real, c.imaginary);
}

void storeArrComplex(Complex *c, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("\nEnter %d complex no.", i + 1);
        printf("\nEnter Imaginary part");
        scanf("%d", &c[i].imaginary);
        printf("\nEnter Real part");
        scanf("%d", &c[i].real);
    }
}

void displayArrComplex(Complex *c, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("\nYour imaginary %d  no is : %d+%di", i + 1, c[i].real, c[i].imaginary);
    }
}

int searchComplex(Complex *c, int s, int r)
{
    for (int i = 0; i < s; i++)
    {
        if (c[i].real == r)
        {
            return i;
        }
    }
    return 0;
}

void printIndexedElement(Complex *c)
{
    printf("\nYour imaginary no is : %d+%di", c->real, c->imaginary);
}
void main()
{
    Complex comp;
    comp = getNumsByVal();
    showNumsByVal(comp);

    int size, r;
    printf("\nEnter How many complex nums you want to store");
    scanf("%d", &size);
    Complex cArr[size];
    storeArrComplex(cArr, size);
    displayArrComplex(cArr, size);

    printf("\nEnter the num to search in array : (enter real part)");
    scanf("%d", &r);
    int idx = searchComplex(cArr, size, r);
    printf("\n%d is the index of the number you searched.", idx + 1);

    printIndexedElement(&cArr[idx]);
}