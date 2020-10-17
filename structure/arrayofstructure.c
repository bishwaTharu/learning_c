#include <stdio.h>

struct facebook
{
    // char name[10];
    float salary;
    int code;
};

int main()
{
    struct facebook fb[3];
    {

        for (int i = 0; i < 3; i++)
        {
            // printf("Enter the details of Employee 1\n");
            // strcpy(fb[i].name, "Ram");
            // printf("Enter his name: %s\n", facebook[i].name);

            printf("Enter his salary:\n");
            scanf("%f", &fb[i].salary);
            printf("Enter his code:\n");
            scanf("%d", &fb[i].code);
        }
        for (int i = 0; i < 3; i++)
        {
            printf("\nSalary:%.2f\ncode:%d\n", fb[i].salary, fb[i].code);
        }
    }
    return 0;
}