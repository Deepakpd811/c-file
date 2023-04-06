#include <stdio.h>

void swap(int *a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n)
{
    for (int j = 0; j < n ; j++)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                // swap(&arr[i], &arr[i + 1]);
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]= temp;
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8, 10, 13, 6};

    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, size);

    printArray(arr, size);

    return 0;
}                                            