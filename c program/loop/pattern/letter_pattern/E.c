#include<stdio.h>

// *****
// *
// *****
// *
// *****


int main(){

    int n  = 7;
    int mid = (n/2) +1;

    for(int i=1;i<=n;i++ ){
        for(int j= 1; j<=n; j++){

            if((i>0 && j==1) || i==1 || i==n ||i==mid ){
                printf("* ");
            }else{
                printf(" ");
            }

        }
        printf("\n");

    }


    return 0;
}