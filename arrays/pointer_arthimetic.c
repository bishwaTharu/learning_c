#include <stdio.h>

int main()
{
    int i = 2;
    int *ptr; //ptr is a pointer which stores the address of int i .
    ptr = &i;
    printf("the address of i is: %u \n", ptr);
    printf("the value of ptr is: %d \n", *(&ptr));
    printf("the address of ptr is: %u \n", &ptr);
    ptr++;
    printf("the address of ptr after increment is : %u ", ptr);

    return 0;
}