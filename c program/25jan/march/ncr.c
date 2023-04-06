#include <stdio.h>

int fact(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {

        return n * fact(n - 1);
    }
}

int main()
{

    int n, r, ncr;
    n = 6;
    r = 4;

    if (n > r)
    {
        ncr = fact(n) / (fact(r) * fact(n - r));
    }
    else
    {
        printf("invalid n<r");
    }

    printf("%d", ncr);

    return 0;

    
}