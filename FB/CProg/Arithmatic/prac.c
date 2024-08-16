#include <stdio.h>
void main()
{
    // int c = printf("123") < printf("abcd") && printf("456") - 3 || printf("hello");
    // int c = printf("123") < printf("abcd") && printf("456") - 3 || printf("");
    // int c = printf("123") < printf("abcd") && printf("456") - 3 || printf("");
    // int c = 0 || 1 && 0; op 0
    // int c = 1 && 0 || 1;
    // int c = 10 / 5 % 2;
    // int c = 10 % 6 / 2; op 2
    // int c = 10 / 6 % 2; // op 1
    int c = printf("123") > printf("abc") && (printf("1") || printf("hello"));
    // int c = 'B';

    printf("%d ", c);
}