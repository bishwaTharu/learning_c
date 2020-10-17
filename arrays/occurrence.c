#include <stdio.h>
void occurrence(char *ptr, char st)
{

    while (*ptr != '\0') //I'm using this loop to read all giveh string
    {
        if (*ptr == st)
        {
            printf("it is present in the string\n");
        }

        ptr++;
    }
}

int main()
{
    char st[] = "bishwanath";
    occurrence(st, 'a');

    return 0;
}