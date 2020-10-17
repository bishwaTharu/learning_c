#include <stdio.h>
float avg(int a, int b, int c);
int main()
{
    int x, y, z;
    float result;
    printf(" enter the value of a\n");
    scanf("%d", &x);
    printf(" enter the value of b\n");
    scanf("%d", &y);
    printf(" enter the value of c\n");
    scanf("%d", &z);

    result = avg(x, y, z);
    printf("the avg is %.2f", result);
    return 0;
}

float avg(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}
