#include <stdio.h>
#include <conio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (j == 1)
            {
                printf("*");
            }
            else if (j == 2)
            {
                if (i == 1 || i == 6)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if (j == 3)
            {
                if (i == 1 || i == 6)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
        
    }
    
}