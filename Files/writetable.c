#include <stdio.h>
#include <math.h>

int insertTab(int val)
{
    // 10 * 1 = 10 => 1
    // 10 * 10 = 100 => 2
    // 10 * 100 = 1000 => 3
    // 10 * 1000 = 10000 => 4
    // 10^x = y
    // x = log_10(y)
    // log(12) = > 10
    int x = log(val);
    return x - 1;
}

int main()
{
    FILE *ptr;
    ptr = fopen("check.txt", "w");
    int num, num1;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("Enter another  number:\n");
    scanf("%d", &num1);
    for (int i = 1; i <= 10; i++)
    {
        int c = num * i;
        int d = num1 * i;
        int max;
        if (num1 > num)
        {
            max = num1;
        }
        else
        {
            max = num;
        }
        int numOfTabs = insertTab(max);
        printf("Numoftabs: %d", numOfTabs);
        if (i == 10)
        {
            fprintf(ptr, "%dx%d=%d", num, i, c);
            for (int j = 0; j < numOfTabs; j++)
            {
                fprintf(ptr, "\t");
            }
            fprintf(ptr, "%dx%d=%d\n", num1, i, d);
        }
        else
        {
            fprintf(ptr, "%dx%d=%d\t\t", num, i, c);
            for (int j = 0; j <= numOfTabs; j++)
            {
                fprintf(ptr, "\t");
            }
            fprintf(ptr, "%dx%d=%d\n", num1, i, d);
        }
    }
    fclose(ptr);
    printf("table is successfully genterated");

    return 0;
}