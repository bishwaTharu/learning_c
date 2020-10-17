#include <stdio.h>
void reverse(int array[], int n)
{
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int arrLen = sizeof(array) / sizeof(array[0]);
    // printf("Size of array: %d\n", sizeof(array));
    // printf("Size of array[0]: %d", sizeof(array[0]));
    reverse(array, arrLen);
    return 0;
}