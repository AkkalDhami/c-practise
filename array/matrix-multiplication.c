#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows of matrix-1: ");
    scanf("%d", &r1);
    printf("Enter cols of matrix-1: ");
    scanf("%d", &c1);

    printf("Enter rows of matrix-2: ");
    scanf("%d", &r2);
    printf("Enter cols of matrix-2: ");
    scanf("%d", &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int arr1[r1][c1];
    int arr2[r2][c2];
    int res[r1][c2];

    printf("Enter elements of matrix-1:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of matrix-2:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    //? Initialize result matrix with 0
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            res[i][j] = 0;
        }
    }

    //? Matrix multiplication
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Matrix Multiplication:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%d\t", res[i][j]);
        printf("\n");
    }

    return 0;
}