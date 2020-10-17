// 18<not eligible to vote , 60>not eligible to vote ,18-60 eliglible
#include <stdio.h>
int main()
{
    int age;
    do
    {
        printf("enter your age : ");
        scanf("%d", &age);
        if (age < 0)
        {
            printf("%d is an invalid age\n", age);
        }
    } while (age < 0);

    // if (age < 0)
    // {
    //     printf("%d is an invalid age", age);
    //     return 1;
    // }

    if (age >= 18 && age <= 60)
    {
        printf("you are eligible to vote\n");
    }
    else if (age > 60 || age < 18)
    {
        printf("you are not eligible to vote\n");
    }

    // else
    // {
    //     printf("you are not eligible to vote\n");
    // }

    return 0;
}
