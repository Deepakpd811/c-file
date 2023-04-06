#include <stdio.h>

int main(){

    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}
                        };

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j <2 ; j++)
    //     {   printf("enter\n pos %d %d\n",i,j);
    //         scanf("%d",&matrix[i][j]);
    //     }
        
    // }

    for (int i = 0; i < 3; i++)
    {
        if(i%2 ==0){
            for (int  j = 0; j < 3; j++)
            {
               printf("j->%d  i->%d  matrix %d \n", j,i,matrix[i][j]);
            }
            
        }else{
            for (int k = 2; k >= 0; k--)
            {
                printf("j->%d  i->%d  matrix %d \n", k,i,matrix[i][k]);
            }
            
        }
        
    }
    

    return 0;
}                                            