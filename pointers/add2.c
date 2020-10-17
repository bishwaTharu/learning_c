#include <stdio.h>
void add(int *a);
int main()
{
    int i;
    int *j;
    j = &i;
    printf(" add of i is : %u\n", &i);
    add(&i);
    return 0;
}
void add(int *a)
{
    printf(" add of i is : %u\n", &a);
}