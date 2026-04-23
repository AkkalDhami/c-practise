#include<stdio.h>

#define file "hello.text"

int main()
{
    FILE *fptr;

    //? 1. Write mode

    fptr = fopen(file, "w"); // w: write mode
    fprintf(fptr, "hello world");
    fclose(fptr);

    //? 2. Read mode

    fptr = fopen(file, "r"); // r: read mode
    if(fptr == NULL){
        printf("Error!");
        return 0;
    }

    char str[100];
    printf("\nReading %s...\n", file);

    fgets(str, 100, fptr);
    printf("%s", str);
    fclose(fptr);

    //? 3. Append mode

    fptr = fopen(file, "a"); // a: append mode
    fprintf(fptr, "\nNew line added");
    fclose(fptr);

    return 0;
}