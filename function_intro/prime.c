#include <stdio.h>
int prime(int n);
int main()
{
    int num;
    printf("enter the number to check : ");
    scanf("%d", &num);
    prime(num);
    return 0;
}
int prime(int n)
{

    /*
    1. check if the number is divisible by 1, 2, 3... upto n-1.
    2. if it is divisible by any number, return 0 (the number is prime);
    */
    if (n <= 1)
    {
        printf("%d is neither prime nor composite.", n);
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            //    not a prime number
            printf("%d is nOt a prime number", n);
            return 0;
        }
    }

    // is a prime number
    printf("%d is a prime number.", n);

    return 0;
}
