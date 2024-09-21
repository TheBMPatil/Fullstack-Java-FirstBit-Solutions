#include <stdio.h>
#define MAX 5
int isFull();
int isEmpty();
void push(int);
void pop();

int top = -1;
int stack[MAX];

void main()
{
    push(10);
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    // push(16);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
}
int isFull()
{
    // printf("top %d", top);
    // printf("  rr %d", (top == ((sizeof(stack) / sizeof(int *)) - 1)));
    return (top == (MAX - 1));
}
int isEmpty()
{
    return (top == -1);
}
void push(int ele)
{
    // printf("Fll %d", isFull());
    if (isFull())
    {
        printf("\nStack is Ovweflow!!");
    }
    else
    {
        top++;
        stack[top] = ele;
        printf("\n%d pushed into stack!!", ele);
    }
}
void pop()
{
    if (isEmpty())
    {
        printf("\nStack Underflow!!");
    }
    else
    {
        printf("\nPoped %d from top=%d", stack[top], top);
        top--;
    }
}