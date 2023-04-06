#include<stdio.h>


// * * * * *
// *
// * * * * *
//         *
// * * * * * 



int main(){

    int n= 5;

    int mid = (n-1)/2;
    int last = n-1;

    for(int i=0; i<=last; i++){ //rows

        for(int j =0; j<=last; j++){ //cols
            


            if(i==0 || i==mid  || i==last || (i<mid && j==0) || (i>mid && j==last) ){
                printf("* ");
            }else{
                printf("  ");
            }
            

        }
        

        printf("\n");

    }
    
    



    return 0;
}