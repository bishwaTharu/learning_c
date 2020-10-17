#include <stdio.h>

int main()
{
    int i = 1;
    int *j;
    j = &i;
    printf("add i=%u", j);
    return 0;
}