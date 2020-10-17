// celcius to fahrenheit
// F=(C*9/5)+32
#include <stdio.h>
void main()
{
    float C;
    float F;
    printf("enter the celcius scale : ");
    scanf("%f", &C);
    F = (C * 9 / 5) + 32;

    printf("the fahrenheit scale is %.2fF", F);
}