#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of the of the student %d:", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("you entered the marks of students %d is: %d\n", i + 1, marks[i]);
    }
    return 0;
}