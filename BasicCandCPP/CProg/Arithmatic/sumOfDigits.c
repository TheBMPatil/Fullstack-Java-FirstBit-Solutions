#include <stdio.h>
void main()
{
    // Two Digits
    int num = 12;
    int r1 = num % 10;
    int q1 = num / 10;
    int sum1 = r1 + q1;
    printf("Sum of digits of %d is : %d \n", num, sum1);

    // Three digits
    int num2 = 123;
    int r21 = num2 % 10;
    int q21 = num2 / 10;
    int r2 = q21 % 10;
    int q2 = q21 / 10;

    int sum2 = r21 + r2 + q2;
    printf("Sum of digits of %d is : %d \n", num2, sum2);

    // Four Digis
    int num4 = 1234;
    int r41 = num4 % 10;
    int q41 = num4 / 10;
    int r42 = q41 % 10;
    int q42 = q41 / 10;
    int r43 = q42 % 10;
    int q43 = q42 / 10;
    int sum4 = r41 + r42 + r43 + q43;
    printf("Sum of digits of %d is : %d \n", num4, sum4);

    // Five Digis
    int num5 = 12345;
    int r51 = num5 % 10;
    int q51 = num5 / 10;
    int r52 = q51 % 10;
    int q52 = q51 / 10;
    int r53 = q52 % 10;
    int q53 = q52 / 10;
    int r54 = q53 % 10;
    int q54 = q53 / 10;
    int sum5 = r51 + r52 + r53 + r54 + q54;
    printf("Sum of digits of %d is : %d \n", num5, sum5);

    // Six Digis
    int num6 = 123456;
    int r61 = num6 % 10;
    int q61 = num6 / 10;
    int r62 = q61 % 10;
    int q62 = q61 / 10;
    int r63 = q62 % 10;
    int q63 = q62 / 10;
    int r64 = q63 % 10;
    int q64 = q63 / 10;
    int r65 = q64 % 10;
    int q65 = q64 / 10;
    // printf("%d , %d ,%d ,%d ,%d, %d ", r61, r62, r63, r64, r65, q65);
    int sum6 = r61 + r62 + r63 + r64 + r65 + q65;
    printf("Sum of digits of %d is : %d \n", num6, sum6);

    // Seven Digis
    int num7 = 1234567;
    int r71 = num7 % 10;
    int q71 = num7 / 10;
    int r72 = q71 % 10;
    int q72 = q71 / 10;
    int r73 = q72 % 10;
    int q73 = q72 / 10;
    int r74 = q73 % 10;
    int q74 = q73 / 10;
    int r75 = q74 % 10;
    int q75 = q74 / 10;
    int r76 = q75 % 10;
    int q76 = q75 / 10;
    int sum7 = r71 + r72 + r73 + r74 + r75 + r76 + q76;
    printf("Sum of digits of %d is : %d \n", num7, sum7);

    // printf("%d %d %d %d %d %d ");
}