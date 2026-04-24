#include<stdio.h>
#include <math.h>

//? 153: 1^3 + 5^3 + 3^3
//? 1634:  1^4 + 6^4 + 3^4 + 4^4

int isArmstrong(int num)
{
    int org = num, sum = 0, rem, digits = 0;

    //? for counting digits
    int temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    //? armstrong checking
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == org;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}