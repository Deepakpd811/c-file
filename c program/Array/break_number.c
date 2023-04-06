#include <stdio.h>

int rev(int n)
{
    int rev = 0;
    int reminder;

    while (n != 0)
    {
        reminder = n % 10;
        rev = rev * 10 + reminder;
        n = n / 10;
    }

    return rev;
}

int main()
{   
    int n;
    scanf("%d",&n);

    int j = 0;
    int arr[4] = {12, 43, 56, 43};
    int newarr[8];

    for (int i = 0; i < 4; i++)
    {
        arr[i] = rev(arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        while (arr[i] != 0)
        {
            int rem = arr[i] % 10;
            newarr[j++] = rem;
            printf("%d ", rem);
            arr[i] /= 10;
        }
    }

    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d ", newarr[i]);
    // }

    return 0;
}