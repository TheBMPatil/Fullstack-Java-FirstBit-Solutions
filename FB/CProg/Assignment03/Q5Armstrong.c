#include <stdio.h>

void main() {
    int num, rem = 0, armN = 0;
    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        rem = temp % 10;
        armN += rem * rem * rem;
        temp /= 10;
    }

    if (armN == num) {
        printf("Number %d is an Armstrong Number.\n", num);
    } else {
        printf("Number %d is not an Armstrong Number.\n", num);
    }
}
