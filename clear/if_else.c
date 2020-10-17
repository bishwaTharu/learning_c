#include <stdio.h>
int main()
{
    int num;
    printf("enter your num :\n");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("%d is a positive num\n", num);
    }

    else
    {

        printf("%d is a negative num :\n", num); /* code */
    }

    return 0;
}