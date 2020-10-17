#include <stdio.h>
int main()
{
    int i;
    int j;
    int n;
    printf("enter the number of rows:\n ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
