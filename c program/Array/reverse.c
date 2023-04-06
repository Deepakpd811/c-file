#include <stdio.h>

void revarr(int arr[],int n)
{

    int val = n - 1;

    for (int i = 0; i < n / 2; i++)
    {
        int temp =arr[i];
        arr[i] = arr[val];
        arr[val] = temp;
        val--;
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d", arr[j]);
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 8};

    int n = sizeof(arr) / sizeof(arr[0]);
    revarr(arr, n);
   

    return 0;
}