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

void stringRev(char *str)
{
    int i = 0, j = stringLength(str) - 1;
    while (i < j)
    {
        int t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
}

int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str, (sizeof str), stdin);

    stringRev(str);
    printf("Reversed string: %s", str);

    return 0;
}