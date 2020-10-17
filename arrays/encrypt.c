#include <stdio.h>
void encrypt(char *ptr)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char st[] = "Baijnath";

    encrypt(st);
    printf("the encrypted string is %s\n", st);
    return 0;
}