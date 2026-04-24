#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[50];
    float marks;
} Student;

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student *s = (Student *)malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++)
    {
        printf("Enter id, name and marks of students-%d:\n", i + 1);
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent-%d Details\n", i + 1);
        printf("Id: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    free(s);
    s = NULL;

    return 0;
}