//area of rectangle
#include <stdio.h>
int main()
{
    float length;
    float breadth;
    printf("enter the length \n");
    scanf("%f", &length);
    printf("enter the breadth \n");
    scanf("%f", &breadth);
    printf("the area of rectangle is %.2f", length * breadth);
    return 0;
}