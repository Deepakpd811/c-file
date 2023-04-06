#include <stdio.h>

int main()
{

    int n = 6;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("D ");
            }
            else if (j == 2 || j == 3)
            {
                printf("E ");
            }
            else if (j == 4)
            {
                printf("P ");
            }
            else if (j == 5)
            {
                printf("A ");
            }
            else if (j == 6)
            {
                printf("K ");
            }
        }

        printf("\n");
    }

    return 0;
}