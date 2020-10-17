#include <stdio.h> //guessing the number game
#include <stdlib.h>
#include <time.h>
int main()
{

    int num, guess;
    int count = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    // printf("the num is %d", num);
    //this generates a rand num between 1 to 100
    // keep running the loop until the number is guessed
    do
    {
        printf(" guess the number between 1 to 100: ");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("lower num please\n");
        }
        if (guess < num)
        {
            printf("higher num please\n");
        }
        count++;

    } while (num != guess);
    printf("you guessed it in %d attempts\n", count);

    return 0;
}
