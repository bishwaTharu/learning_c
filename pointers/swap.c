#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 3;
    int y = 5;

    printf("the value of x and y before swap are %d and %d : \n", x, y);
    swap(&x, &y);
    printf("the value of x and y after swap are %d and %d : \n", x, y);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}