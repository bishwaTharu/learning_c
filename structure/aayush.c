#include <stdio.h>
#include <string.h>
struct aayush
{
    char name[50];
    char game[50];
    float read;
};

int main()
{
    struct aayush e1;

    e1.read = 1.2;
    strcpy(e1.name, "aayush");
    strcpy(e1.game, "freefire");
    printf("His name is %s\n", e1.name);
    printf("He plays %s\n", e1.game);
    printf("He reads  %.1f hrs \n", e1.read);

    return 0;
}