#include <stdalign.h>
void main()
{
    printf("POC \n");
    int c;

    // c = printf("hello") && printf("xyz");
    // printf("%d", c);
    // op : helloxyz1

    // c = printf("hello") || printf("xyz");
    // printf("%d", c);
    // OP : hello1

    // c = printf("") || printf("xyz");
    // printf("%d", c);
    // OP: xyz1

    // c = printf("") && printf("xyz");
    // printf("%d", c);
    // OP : 0

    // c = printf(" ") && printf("xyz") - printf("ABC");
    // printf("%d", c);
    // OP :  xyzABC0

    // c = printf("_xyz") && printf("pqr") + printf("abc");
    // printf("%d", c);
    // OP: _xyzpqrabc1

    // c = printf("123") < printf("abc") && printf("456") + 22;
    // printf("%d", c);
    // OP : 123abc0

    // c = printf("123") < printf("abc") && printf("456") + 22;
    // printf("%d", c);

    // c = printf("123") < printf("abc") && printf("456") + 22;
    // printf("%d", c);

    int a = 10, b = 20;

    // c = (printf("hi") && a > b) || printf("Hello");
    // printf("%d", c);
    // OP: hiHello1

    // c = ((a == b && b > c) || printf("hello")) && ((printf("Hi") && printf("")) || a);
    // printf("%d", c);
    // OP: helloHi1

    c = ((a != b || printf("Hello")) && ((printf("fbs") && printf("2")) || a));
    printf("%d, %d, %d", a, b);
    printf("%d, %d ", a, b, c);
    // OP : fbs210, 20, garbadgevalue, 20
}