#include <stdio.h>

int main()
{
    int num[5];
    int *ptr;
    ptr = &num[0];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the number %d :\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    // ptr has pointed to the end of the array.
    // reseting pointer to the beginning of the array.
    ptr = &num[0];
    for (int i = 0; i < 5; i++)
    {
        printf("you entered the number %d is:%d\n", i + 1, *(ptr + i));
    }
    return 0;
}