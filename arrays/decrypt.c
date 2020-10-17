#include <stdio.h>
void decrypt(char *ptr)

{
    while (*ptr != '\0')
    {
        *ptr = *ptr - 2; //this change the ASCII value.
        ptr++;
    }
}
void encrypt(char *ptr)
{
    while (*ptr != '\0')
    {
        *ptr = *ptr + 2;
        ptr++;
    }
}

int main()
{
    char st[] = "baijanath";
    encrypt(st);
    printf("the encrypted string is %s\n", st);
    decrypt(st);
    printf("the decrypted string is %s\n", st);
    return 0;
}