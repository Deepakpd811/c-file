#include <stdio.h>

int main()
{

    int i = 1;

    while (i < 5)
    {
        int j = 0;
        while (j < i)
        {

            printf("%d", j);
            j++;
        }
        printf("%d", i);
        i++;
        printf("\n");
    }

    return 0;
}