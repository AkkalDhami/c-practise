#include<stdio.h>

//? Pointer to Function: a pointer that stores the address of a function
//* Syntax: return_type (*ptr_name)(params);

int add(int a, int b){
    return a + b;
}

int main()
{
    int (*pa)(int, int); //? syntax

    pa = add; //* p -> address of a add()

    int res = pa(2, 4);
    printf("Result: %d\n", res);

    return 0;
}