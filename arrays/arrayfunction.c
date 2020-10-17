#include <stdio.h>
void array(int marks[], int n) //array(int ptr[],int n)
//array function to print the elememts in the array.
{
    for (int i = 0; i < n; i++)
    {

        printf(" the marks of student %d is: %d\n", i + 1, marks[i]);
        marks[2] = 100;
    }
}
int main()
{
    int marks[] = {23, 24, 37, 36};
    array(marks, 4);
    printf("%d\n", marks[2]);
    return 0;
}