#include <stdio.h>
int prime(int n);
int main()
{
    int count = 0;
    long int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (prime(i) == 3)
        {
            count++;
            printf("%d\n", i);
        }
    }
    printf("Total count: %d\n", count);
    return 0;
}
int prime(int n)
{
    if (n <= 1)
    {
        // neither
        return 1;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // not a prime
            return 2;
        }
    }

    //  prime
    return 3;
}
