#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0 && num < 5)
    {
        printf("The number is less than five.");
    }
    else if (num > 0)
    {
        printf("The number is greater than five.");
    }

    return 0;
}