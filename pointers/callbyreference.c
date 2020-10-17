#include <stdio.h>
// i=4 --->40
int change(int *a);
int main()
{
    int i = 4;
    printf("the value of i is : %d\n", i);
    change(&i);
    printf("the value of i after multiplication is : %d\n", i);
    return 0;
}
int change(int *a)
{
    *a = 10 * (*a); //the value of i changes because a store the address of i
    int result = *a;
    return result;
}