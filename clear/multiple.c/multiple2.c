#include <stdio.h>

int main()
{
    int i = 100;
    int count = 0;

    while (i >= 100 && i <= 1000)
    {
        if (i % 11 == 0)
        {
            count++;
            printf("count: %d\n", count);
            printf("%d\n", i);
        }
        i++;
    }
    printf("total count: %d ", count);
    return 0;
}
