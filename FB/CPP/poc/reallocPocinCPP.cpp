#include <iostream>
int main()
{
    int *nums = new int[10];

    printf("\nNums Addr : %u", nums);

    int *newptr = (int *)realloc(nums, sizeof(int) * 10);
    printf("\n Realloc Addr : %u", &newptr);
    delete[] nums;
    printf("\nNums Addr after del: %u", nums);
    return 0;
}
