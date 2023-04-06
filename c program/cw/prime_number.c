#include <stdio.h>

int main()
{

    // print all prime number for given range n

    // printf("%d",7%8);

    int n = 100;

    for(int j=2; j<n; j++){
        
    int x = 0;

    for (int i=2; i < j-1; i++)
    {

        if (j % i == 0)
        {
            x = 1;
            break;
        }
       
    }
    if (x == 0)
    {
        printf(" %d \t", j);
    }
    

    }

    return 0;
}