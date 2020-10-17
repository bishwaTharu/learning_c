#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("check.txt", "r");
    if (ptr == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("file exists");
    }

    return 0;
}