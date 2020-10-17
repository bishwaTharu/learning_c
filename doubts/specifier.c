#include <stdio.h>
int main()
{
    int i = 2;
    int *j;
    j = &i;
    printf("add i=%u\n ", &i);
    printf("add j=%u\n ", &j);
    printf("add i=%d\n", *(&i));
    printf("add j=%d\n ", *j);
    return 0;
}
