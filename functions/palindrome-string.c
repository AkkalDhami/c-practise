#include <stdio.h>

int stringLength(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i - 1;
}

int isPalin(char *str)
{
    int len = stringLength(str), flag = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    return flag;
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);

    if (!isPalin(str))
    {
        printf("Plaindrome.");
    }
    else
    {
        printf("Not Plaindrome.");
    }

    return 0;
}