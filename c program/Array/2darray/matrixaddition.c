#include<stdio.h>

int main(){

    int arr[3][3] = {
                     {1,2,3},
                     {3,4,5},
                     {6,7,8},
                  };
    int arr2[3][3] = {
                     {1,2,3},
                     {3,4,5},
                     {6,7,8},
                  };
    // int arr1[2][2] = {
    //     {1,2},
    //     {3,4}
    // };

    // int arr2[2][2];
    int arr3[3][3];
    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){
            arr3[i][j]=0;
            
            for (int k= 0; k < 3; k++)
            {
                arr3[i][j] += arr[i][k]*arr2[k][j];
                
            }
            
            
        }
        

        printf("\n");
    }

    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    




    return 0;
}