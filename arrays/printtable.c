#include <stdio.h>
void printTable(int arraymul[], int num, int n)
{

    for (int i = 0; i < n; i++)
    {
        int c = num * (i + 1);
        printf("%d*%d=%d\n", num, i + 1, c);
    }

    printf("***************************\n\n");
}

int main()
{

    int a, b, c, d, e, f;
    printf("which number of multiplication table of:\n");
    scanf("%d", &a);
    printf("upto what number:\n");
    scanf("%d", &b);
    printf("which number of multiplication table of:\n");
    scanf("%d", &c);
    printf("upto what number:\n");
    scanf("%d", &d);
    printf("which number of multiplication table of:\n");
    scanf("%d", &e);
    printf("upto what number:\n");
    scanf("%d", &f);
    int mulTable[a][b];

    printTable(mulTable[0], a, b);
    printTable(mulTable[1], c, d);
    printTable(mulTable[2], e, f);

    return 0;
}