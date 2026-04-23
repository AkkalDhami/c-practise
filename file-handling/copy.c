#include <stdio.h>

int main()
{
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("copy.txt", "w");

    if (src == NULL || dest == NULL)
    {
        printf("Error!\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}