// create a program to calculate simple interest
// SI=P*T*R/100
#include <stdio.h>
void main()
{
    float P, R;
    int T;
    float SI;
    printf("Enter principle: Rs.");
    scanf("%f", &P);
    printf("Enter time: ");
    scanf("%d", &T);
    printf("Enter rate: ");
    scanf("%f", &R);
    SI = P * T * R / 100;
    printf("Simple Interest: Rs.%.2f", SI);
}