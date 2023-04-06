#include<stdio.h>

//  ***
// *   *
// *****
// *   *
// *   *


int main(){

    int n  = 8;
    int mid = (n/2)+1;

    for(int i=1;i<=n;i++ ){
        for(int j= 1; j<=n; j++){

            if((i>=2 && j==1) || i>=2 && j==n ||   i==mid  || (i==1 && j>1 && j<=n-1 ) ){
                printf("* ");
            }else{
                printf("  ");
            }

        }
        printf("\n");

    }


    return 0;
}