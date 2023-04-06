// sum of right angle triangle

#include <stdio.h>

int main()
{

    int sum = 0;
    int n = 9;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
           ;
        }

        for (int k = n - i; k >= 1; k--)
        {
            printf("  ");
        }

         sum = sum + i;
        printf("= %d\n", sum);
    }

    return 0;
}