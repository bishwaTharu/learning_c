#include <stdio.h> //guessing the number game
#include <stdlib.h>
#include <time.h>
int main()
{

    int num, guess;
    int count = 0;
    int upper = 100, lower = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    // printf("the num is %d", num);
    //this generates a rand num between 1 to 100
    // keep running the loop until the number is guessed
    do
    {
        guess = (upper + lower) / 2;
        if (guess > num)
        {
            printf("lower num please\n");
            upper = guess;
        }
        if (guess < num)
        {
            printf("higher num please\n");
            lower = guess;
        }
        count++;

    } while (num != guess);
    printf("you guessed it in %d attempts.\nhe random number is %d\nThe guessed num is %d\n", count, num, guess);

    return 0;
}
