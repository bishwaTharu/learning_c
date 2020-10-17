#include <stdio.h>

int main()
{

    int array[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A_%d_%d::> ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\n{");

    for (int i = 0; i < 3; i++)
    {
        printf("{");
        for (int j = 0; j < 2; j++)
        {
            if (j == 1)
            {
                printf("%d", array[i][j]);
            }
            else
            {
                printf("%d, ", array[i][j]);
            }
        }
        printf("}");
        printf("\n");
    }
    printf("}");

    return 0;
}