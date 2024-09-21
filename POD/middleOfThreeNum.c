#include <stdio.h>
int middleOfThree(int *, int *, int *);
void main()
{
    printf("Finding middle of entered from three nums \n");
    int num1, num2, num3;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    printf("Enter num3: ");
    scanf("%d", &num3);
    printf("\n%d : is Middle Number..!", middleOfThree(&num1, &num2, &num3));
}
int middleOfThree(int *num1, int *num2, int *num3)
{
    if ((*num1 > *num2 && *num1 < *num3) || (*num1 < *num2 && *num1 > *num3))
    {
        return (*num1);
    }
    else if ((*num2 > *num1 && *num2 < *num3) || (*num2 < *num1 && *num2 > *num3))
    {
        return (*num2);
    }
    else
    {
        return (*num3);
    }
}