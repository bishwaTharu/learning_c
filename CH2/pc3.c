// puts and gets
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf(" enter the word is :");
    char a[30];
    gets(a);
    printf("you entered \n", a);
    puts(a);

    return 0;
}
