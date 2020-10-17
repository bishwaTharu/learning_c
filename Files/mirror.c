#include <stdio.h>
// *
// * * *
// * * * * *

int main()
{
    int rows;
    FILE *ptr;
    ptr = fopen("mirror.txt", "w");
    printf("enter the number of rows:\n");
    scanf("%d", &rows);
    for (int i = rows; i > 0; i--)
    {
        for (int j = rows; j > 0; j--) // 1st loop:(1,1)  2nd loop:(2,1) (2,2) (2,3)
        {
            fprintf(ptr, "* ");
        }
        fprintf(ptr, "\n");
    }
    printf("pattern successfully generated");
    fclose(ptr);
    return 0;
}