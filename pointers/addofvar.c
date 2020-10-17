#include <stdio.h>

int main()
{
    int i = 2;
    int *j;
    j = &i;
    printf("add i is : %u\n", j);
    printf("value of i is : %d\n", *j);

    return 0;
}