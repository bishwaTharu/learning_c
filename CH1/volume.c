// volume of a cylinder
#include <stdio.h>

void main()
{
    float radius;
    float height;
    const float PI = 3.1415; //---> constant of which type

    printf("enter the radius: ");
    scanf("%f", &radius);
    float area = PI * radius * radius;
    printf("area of circle is %.2f \n", area);
    printf("enter the height of cylinder: ");
    scanf("%f", &height);
    printf("volume of cylinder is %.2f", area * height);
}