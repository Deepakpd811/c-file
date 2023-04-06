#include <stdio.h>

int main()
{

    int rows, i, j, space;
    rows =8;
    for (i = rows; i >= 1; --i)
    {
        for (space = 0; space < rows - i; ++space)
            printf("  ");
        for (j = 1; j <=  i ; ++j)
            printf("1 ");
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
    }

    return 0;
}