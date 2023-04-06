#include <stdio.h>
int main()
{

    int i, j;
    int flag = 0;

    int arr[5][5] = {{1, 2, 3, 4, 5},
                     {2, 1, 3, 4, 5},
                     {3, 2, 1, 4, 5},
                     {4, 3, 2, 1, 5},
                     {5, 4, 3, 2, 1}};

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if (arr[i][j] == arr[1][1])
            {
                
                flag = 1;
            }
            else
            {
                
                flag = 0;
            }
        }
            
    }
    

    if (flag == 1)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}