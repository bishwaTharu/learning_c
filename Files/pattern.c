#include <stdio.h>
// *
// * * *
// * * * * *

int main()
{
    int rows;
    FILE *ptr;
    ptr = fopen("pattern.txt", "w");
    printf("enter the number of rows:\n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++) // 1st loop:(1,1)  2nd loop:(2,1) (2,2) (2,3)
        {
            fprintf(ptr, "* ");
        }
        fprintf(ptr, "\n");
    }
    printf("pattern successfully generated");
    fclose(ptr);
    return 0;
}