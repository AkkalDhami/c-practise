#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13

void fibo(int n)
{
    int a = 0, b = 1, c = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a);
        int c = a + b;
        a = b;
        b = c;
    }
}

int fiboRec(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        return fiboRec(n - 1) + fiboRec(n - 2);
    }
}

void printFibo(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", fiboRec(i));
    }
}

int main()
{
    int n;
    do
    {
        printf("Enter the no. of terms: ");
        scanf("%d", &n);
    } while (n < 0);

    fibo(n);
    printf("\n");
    printFibo(n);

    return 0;
}