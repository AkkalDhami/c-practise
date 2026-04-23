#include <stdio.h>

#define file "test.dat"

int main()
{
    int num;
    FILE *fp;

    //* Writing to Binary File
    fp = fopen(file, "wb"); // wb: write binary

    fwrite(&num, sizeof(num), 1, fp);
    fclose(fp);

    //* Reading from Binary File
    fp = fopen("data.dat", "rb"); // rb: read binary

    fread(&num, sizeof(num), 1, fp);
    printf("Number: %d", num);

    fclose(fp);

    return 0;
}