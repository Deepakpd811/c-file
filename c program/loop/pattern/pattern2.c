#include <stdio.h>

// 15
// 14 13
// 12 11 10
// 9 8 7 6
// 5  4 3 2 1

int main()
{
    // int n = 5;
    // int sum = 16;

    // for (int i = 1; i <= n; i++)
    // {

    //      for (char j = 65; j <= 72 - i; j++)
    //     {

    //         printf("%c", j);
            
    //     }
    //     printf("\n");




    // }

    int n = 5;
    int k = 15 ; 

    for(int i = 1; i<=5; i++){
        
        for (int  j =1; j <=i; j++)
        {
            printf("%d ",k);
            k-=1;
        }
        


        printf("\n");
    }

    return 0;
}