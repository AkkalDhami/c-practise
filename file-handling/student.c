#include <stdio.h>

#define FILE_NAME "test.dat"

typedef struct Student
{
    int id;
    char name[50];
    float gpa;
} S;

int main()
{
    FILE *fptr;

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    S s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter id, name & gpa of student-%d:\n", i + 1);
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].gpa);
    }

    fptr = fopen(FILE_NAME, "wb");
    if (fptr == NULL)
    {
        printf("Error!\n");
        return 1;
    }

    fwrite(s, sizeof(S), n, fptr);

    fclose(fptr);

    fptr = fopen(FILE_NAME, "rb");
    if (fptr == NULL)
    {
        printf("Error!\n");
        return 1;
    }

    fread(s, sizeof(S), n, fptr); 

    fclose(fptr);

    printf("\nStudent Details\n");

    for (int i = 0; i < n; i++)
    {
        printf("Id: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("GPA: %.2f\n\n", s[i].gpa);
    }

    return 0;
}