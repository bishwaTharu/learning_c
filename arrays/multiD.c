#include <stdio.h>

int main()
{
    int n_students = 3;
    int n_subjects = 5;
    char a[40];
    gets(a);

    int marks[3][5];
    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("Enter the marks of student %d in subject %s (%d)\n", i + 1
            , a, j + 1);
            scanf("%d %s", &marks[i][j], a);
        }
    }

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The marks of student %d in subject %d is:%s (%d)\n", i + 1
            , j + 1, a, marks[i][j]);
        }
    }

    return 0;
}