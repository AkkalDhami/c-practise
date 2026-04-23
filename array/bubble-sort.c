#include <stdio.h>

void bubbleSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorting Array in Ascending Order:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    return 0;
}