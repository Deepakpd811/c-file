#include<stdio.h>


int main(){

    int row,col;
    scanf("%d %d",&row ,&col);


    int arr[row][col];

    
    int itri;

    for(int i=0; i<row; i++){
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
                itri=i;
            }
        }
        printf("\n");
    }

    for(int i=0; i<row; i++){
        for (int j = 0; j < col; j++)
        {
            if(i==itri){
                printf("%d", 0);
            }else{
                printf("%d",arr[i][j]);
            }
        }
        printf("\n");
    }


   


    return 0;
}