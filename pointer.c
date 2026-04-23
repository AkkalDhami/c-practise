#include <stdio.h>

/*
? Pointer: a variable that stores the memory address of another variable.
? It allows us to indirectly access and manipulate the value stored at that memory address.
*/

int main()
{
    int a = 10;
    int *p;
    p = &a;

    printf("address of a: %p\n", p);
    printf("value of a: %d\n", *p);

    return 0;
}