#include <stdio.h>
int main()
{

    int t =2;
    int i, j;
    int flag = 0;

   
        int n = 5;
        
        int arr[5][5] ={{1,2,3,4,5},
                        {2,1,3,4,5},
                        {2,1,1,4,5},
                        {2,1,3,1,5},
                        {2,1,3,4,1},

        };
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if(i==j){
                    if(arr[i][j] != arr[0][0]){
                        flag =1;
                        break;
                    }
               
                }
            }
            printf("\n");
        }

        if (flag == 1)
        {
            printf("FALSE");
        }
        else
        {
            printf("TRUE");
        }

    
}
