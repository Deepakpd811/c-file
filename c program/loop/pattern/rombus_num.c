#include <stdio.h>

int main()
{

    int n = 4;

    for (int rows = 1; rows <= n; rows++)
    {
        for (int cols = n - 1; cols >= rows; cols--)
        {
            printf("   ");
        }

        for (int cols = rows; cols < 2 * rows; cols++)
        {

            printf(" %d ", cols);
        }
        int ele = 2 * (rows - 1);

        for (int cols = 1; cols <= rows - 1; cols++)
        {
            printf(" %d ", ele--);
        }

        printf("\n");
    }

    for (int rows = n - 1; rows >= 1; rows--)
    {
        for (int cols = n - 1; cols >= rows; cols--)
        {
            printf("   ");
        }

        for (int cols = rows; cols < 2 * rows; cols++)
        {

            printf(" %d ", cols);
        }
        int ele = 2 * (rows - 1);

        for (int cols = 1; cols <= rows - 1; cols++)
        {
            printf(" %d ", ele--);
        }

        printf("\n");
    }

    return 0;
}
