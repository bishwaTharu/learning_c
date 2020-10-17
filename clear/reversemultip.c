#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    for (int i = 10; i; i--)
    {
        int multiple = n * i;
        printf("%d * %d = %d\n", n, i, multiple);
    }

    return 0;
}
