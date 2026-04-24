#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void printPrimeNums(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            printf("%d, ", i);
        }
    }
}

int main()
{

    int n;
    printf("Enter no of terms: ");
    scanf("%d", &n);

    printPrimeNums(n);
    return 0;
}