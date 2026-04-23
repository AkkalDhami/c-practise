#include<stdio.h>

//? Pointer to Structure: stores the address of a structure variable

typedef struct Employee
{
    int id;
    float salary;
} E;

int main()
{
    E e1;
    e1.id = 1;
    e1.salary = 123.1;

    E *p;

    p = &e1;

    printf("Employee Id: %d\n", p->id);
    printf("Employee Salary: %f\n", (*p).salary);

    //? Notes:
    //* accessing: (*p). , p->

    return 0;
}