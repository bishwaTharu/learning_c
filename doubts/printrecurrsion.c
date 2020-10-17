#include <stdio.h>
void print();

int main()
{
    print();
    return 0;
}

void print()
{
    int i = 0;
    while (i < 100)
    {
        i++;
        printf("%d\n", i);
    }
}