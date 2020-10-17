#include <stdio.h>
int factorial(int i); //function declaration 0r function prototype
int main()
{
    int result = factorial(7);
    //5 is the argument
    printf("the factorial(7) is : %d ", result);
    return 0;
}
int factorial(int i)
{

    if (i == 0 || i == 1)
    {
        return 1; //it returns the output
    }
    else
    {
        return i * factorial(i - 1);
    }
    return 0;

} //function definition