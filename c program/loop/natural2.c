#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 0; i <= 100; i++)
    {   
        printf("%d \t", i);

        if(count %10 == 0){
            count = 0;
            
            printf(" \n");
        }
        
        
        count++;
    };

    return 0;
}