// write a program to find the grade of the students
// 90-100--->A , 80-90---->B , 70-80---->C,60 -70---->D , <70--->F
#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks :");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("you grade is A");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("you grade is B");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("you grade is C");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("you grade is D");
    }
    else
    {
        printf("you grade is F");
    }


    return 0;
}
