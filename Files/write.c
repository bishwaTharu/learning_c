#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt", "w");
    int num = 34;
    
    fprintf(ptr, "%d", num);
    
    fclose(ptr);
    printf("file successfully generated ");
    return 0;
}