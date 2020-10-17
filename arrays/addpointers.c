#include <stdio.h>

int main()
{
    int i = 2, j = 3;

    int *ptr1;
    ptr1 = &i;
    int *ptr2;
    ptr2 = &j;
    printf("the value of ptr1 or address of i is:  %u\n", ptr1);
    printf("the value of ptr2 or address of j is:  %u\n", ptr2);

    printf("the value of ptr is : %d\n", ptr1 + ptr2);

    return 0;
}