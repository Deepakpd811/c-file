#include <stdio.h>

int main()
{

    int n = 7;
    int x = 0;

    for (int i = 2; i < n - 1; i++)
    {

        if (n % i == 0)
        {
            x = 1;
            break;
        }
        else
        {
            x = 0;
        }
    }
    if (x == 0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}
