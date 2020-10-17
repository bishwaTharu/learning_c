#include <stdio.h>
int prime(int num);
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number to check: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}

int prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is a composite number\n", num); //code
        }
        return 0;
    }

    {
        printf("%d is a prime number\n", num);
    }
    return 0;
}