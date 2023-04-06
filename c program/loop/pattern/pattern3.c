#include <stdio.h>

int main()
{

    int n = 7;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (char j = 65; j <= 72 - i; j++)
        {

            printf("%c", j);
        }

        for (int m = 71 - i; m >= 65; m--)
        {
            printf("%c", m);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (char j = 65; j <= 72 - i; j++)
        {

            printf("%c", j);
        }

        for (int m = 71 - i; m >= 65; m--)
        {
            printf("%c", m);
        }

        printf("\n");
    }

    return 0;
}