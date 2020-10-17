#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 100;
    int count = 0;
    while (i >= 100 && i <= 1000)
    {
        if (i % 3 == 0)
        {
            count++;
            printf("Count: %d\n", count);
            printf("%d\n", i);
        }
        i++;
    }

    printf("Total Count: %d", count);
    return 0;
}
