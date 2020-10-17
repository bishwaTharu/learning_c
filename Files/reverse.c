#include <stdio.h>
//231=132

int main()
{
    int n;
    int rev = 0;
    int remainder;
    FILE *ptr;
    ptr = fopen("reverse.txt", "w");
    printf("enter your number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    fprintf(ptr, "reversed num is :%d", rev);
    fclose(ptr);
    printf("number successfully reversed");
    return 0;
}