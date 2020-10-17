#include <stdio.h>
#include <string.h>
struct employee
{
    char name[20];
    float salary;
    int code;
};

int main()
{

    struct employee e1, e2;
    {
        e1.salary = 4000.75;
        e1.code = 103;
        strcpy(e1.name, "Ram");

        e2.salary = 3000.54;
        e2.code = 101;
        strcpy(e2.name, "Shayam");
        printf("Details of employee 1:\nName:%s\nSalary:%.2f\nCode:%d\n", e1.name, e1.salary, e1.code);
        printf("___________________________________\n\n");
        printf("Details of employee 2:\nName: %s\nSalary:%.2f\nCode:%d\n", e2.name, e2.salary, e2.code);
    }

    return 0;
}