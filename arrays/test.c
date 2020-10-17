#include <stdio.h>

int main()
{

    int array[2][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("A_%d_%d::> ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    return 0;
}