#include <stdio.h>

int main()
{

    int n = 5;
    int mid = (n / 2) + 1;
    // int last = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            // *     *
            // * *   *
            // *  *  *
            // *   * *
            // *     *
            // if ((i >=1 && j==1) || (i>0 && j==n) || (i==mid && j==mid) || (i==n-3 && j==n-3)|| (i==n-1 && j==n-1))
            // {
            //     printf("* ");
            // }else{
            //     printf("  ");
            // }
            if (i >= 0)
            {
                if (j == 1 && j == 5)
                {
                    printf("*");
                }
            }
            else
            {
                printf("g  ");
            }
        }

        printf("\n");
    }

    return 0;
}