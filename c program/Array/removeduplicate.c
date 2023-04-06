#include <stdio.h>

int main()
{

    int arr[] = {1, 4, 3, 4, 1, 5, 5,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int x;

    

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n ; k++)
                {
                    arr[k] = arr[k + 1];
                    
                }
                n--;
                // j--;
                
                
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    // printf("%d",x);

    return 0;
}