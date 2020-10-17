#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("text.txt", "r");
    char c = fgetc(ptr);
    while (c != EOF)

    {
        printf("%c", c);

        c = fgetc(ptr);
    }

    return 0;
}