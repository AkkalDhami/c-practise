#include <stdio.h>

int reverse(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return rev;
}

int isPalin(int n){
    return n == reverse(n);
}

int main()
{

    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    printf("Reverse no: %d\n", reverse(n));

    if(isPalin(n)){
        printf("%d is palindrom num.", n);
    } else {
        
        printf("%d is not palindrom num.", n);
    }

    return 0;
}