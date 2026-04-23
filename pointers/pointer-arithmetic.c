#include<stdio.h>

//? Pointer Arithmetic: means performing mathematical operations like + , -, ++, on pointers

int main()
{
    int arr[] = {1, 2, 3, 4};

    int *p = arr;

    printf("%d\n", *p); //? arr[0] => 1

    p++; //? p[size of int] (4++) => 2
    
    printf("%d\n", *p); //? 2

    //* if int = 4 bytes, p++ -> moves to 4 bytes forward

    int a = 5, b = 2;
    int *p1 = &a, *p2 = &b;

    printf("value of a: %d\n", *p1);
    printf("value of b: %d\n", *p2);

    printf("a + b: %d\n", *p1 + *p2);
    printf("a - b: %d\n", *p1 - *p2);
    printf("a * b: %d\n", *p1 * *p2);

    return 0;
}