#include <stdio.h>

#define file "emp.txt"

typedef struct Employee
{
    int id;
    char name[50];
    float salary;
} E;

int main()
{
    FILE *fptr;
    fptr = fopen(file, "w");
    if (fptr == NULL)
    {
        printf("Error!");
        return 0;
    }

    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    E e[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter id, name & salary of employee-%d:\n", i + 1);
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);

        fprintf(fptr, "%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    fclose(fptr);

    fptr = fopen(file, "r");
    if (fptr == NULL)
    {
        printf("Error!");
        return 0;
    }

    E temp;
    
    while (fscanf(fptr, "%d %s %f", &temp.id, temp.name, &temp.salary) != EOF)
    {
        printf("Employee Details:\n");
        printf("Id: %d\n", temp.id);
        printf("Name: %s\n", temp.name);
        printf("Salary: %.2f\n\n", temp.salary);
    }

    fclose(fptr);
    return 0;
}