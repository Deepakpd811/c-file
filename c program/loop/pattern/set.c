#include <stdio.h>

int main()
{

    int a[3] = {1, 2, 4};
    int b[3] = {4, 2, 1};
    
    
    
    for (int i = 0; i < 3; i++)
    {
        printf("%da ", a[i]);
        for (int j = 0; j < 3; j++)
    {
        
            printf("%db ", b[i]);
        
    }
    printf("\n");
    }
    


    return 0;
}