#include <stdio.h>
int main()
{
    int factorial = 1;
    int n;

    printf("enter the number : ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("factorial is 1\n");
    }
    for (int i = 1; i <= 10; i++)
    {

        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}
