#include <stdio.h>
void sumavg(int a, int b, int *sum, float *avg);
int main()
{
    int sum;
    float avg;
    int i = 3;
    int j = 4;
    sumavg(i, j, &sum, &avg);
    printf("the sum of %d and %d is : %d\n", i, j, sum);

    printf("the avg of %d and %d is : %f\n", i, j, avg);
    return 0;
}
void sumavg(int a, int b, int *sum, float *avg)
{

    *sum = a + b;
    *avg = (float)(*sum) / 2;
}