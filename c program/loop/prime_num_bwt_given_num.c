#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    for (int j = 2; j <= k; j++)
    {
        int x = 1;

        for (int i = 2; i < (j); i++)
        {

            if (j % i != 0)
            {
                int x = 1;
            }
            else
            {
                x = 0;
                break;
            }
        }

        if (x == 1)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}