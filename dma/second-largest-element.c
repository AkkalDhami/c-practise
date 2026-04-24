#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], smax = arr[1];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && smax < max)
        {
            smax = arr[i];
        }
    }

    printf("2nd largest element: %d\n", smax);
    printf("Largest element: %d\n", max);

    free(arr);
    arr = NULL;

    return 0;
}