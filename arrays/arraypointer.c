#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 5};
    int *ptr;
    ptr = &arr[0];
    for (int i = 0; i < 4; i++)
    {

        printf("the elements in arr[%d] is %d\n", i, *(ptr + i));
        
    }
    return 0;
}