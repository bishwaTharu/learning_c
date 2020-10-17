#include <stdio.h>
int sum(int num);
int main()
{
    int result;
    int n;
    printf("enter the number to sum from 1 to n \n: ");
    scanf("%d", &n);
    result = sum(n);
    printf("the sum 1 to %d is : %d  ", n, result);

    return 0;
}
int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    num = num + sum(num - 1);
    return num;
}