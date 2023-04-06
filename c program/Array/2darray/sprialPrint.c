#include <stdio.h>

int main(){

    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}
                        };

    int strRow = 0;
    int strcol = 0;
    int i;

    while(strRow < 3 && strcol<3){

        for(i = 0; i<3; i++){
            printf("%d", matrix[strRow][i]);
        }
        strRow++;
        for(i = strcol; i<3; i++){
            printf("%d", matrix[i][2]);
        }
        strRow++;

        

    }
    

    return 0;
}                                            