#include <stdio.h>
int prime(int num);
int main()
{
    int n;
    int count = 0;
    int i;
    printf("enter the number upto which you want to get prime number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (prime(i) == 3)
        {
            count++;
            printf("%d\n", i);
        }
    }

    printf("total count is : %d", count);

    return 0;
}
int prime(int num)
{
    if (num <= 1)
    {

        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 2;
        }
    }

    return 3;
}
