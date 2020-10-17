#include <stdio.h>
/*the greatest common divisor or the gcd of two or more positive integers happens
 to be the largest positive integer that divides the numbers without 
 leaving a remainder.
 Product of Two numbers = (HCF of the two numbers) x (LCM of the two numbers)*/
int main()
{
    int a, b, x, y, t, gcd, lcm;

    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);

    a = x;
    b = y;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    gcd = a;
    lcm = (x * y) / gcd;

    printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
    printf("Least common multiple of %d and %d = %d\n", x, y, lcm);

    return 0;
}