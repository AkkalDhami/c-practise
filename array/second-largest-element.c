#include <stdio.h>

int main()
{
    int arr[5] = {13, 25, 34, 14, 56};

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

    return 0;
}