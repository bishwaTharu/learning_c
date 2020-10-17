#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int num;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("the num is %d", num); //this generates a rand num between 1 to 100

    return 0;
}
