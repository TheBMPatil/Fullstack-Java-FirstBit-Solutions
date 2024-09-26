#include <stdio.h>
typedef struct Time
{
    int hh;
    int mm;
    int ss;

} Time;
void main()
{
    Time t1;
    storeTime(&t1);
}
void storeTime(Time *t)
{
    printf("\nEnter Hours :");
    scanf("%d", t->hh);
    printf("\nEnter Min :");
    scanf("%d", t->mm);
    printf("\nEnter Sec :");
    scanf("%d", t->ss);
}