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
                printf("*");
            }else{
                printf(" ");
            }
            

        }
        

        printf("\n");

    }
    printf("\n");//N


     for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            // *     *
            // * *   *
            // *  *  *
            // *   * *
            // *     *
            if ((i >=1 && j==1) || (i>0 && j==5) || (i==3 && j==3) || (i==2 && j==2)|| (i==4 && j==4))
            {
                printf("*");
            }else{
                printf(" ");
            }
        }

        printf("\n");
    }
    printf("\n"); //E

    for(int i=1;i<=5;i++ ){
        for(int j= 1; j<=5; j++){

            if((i>0 && j==1) || i==1 || i==5 ||i==3 ){
                printf("*");
            }else{
                printf("");
            }

        }
        printf("\n");

    }
    printf("\n");//H

    for(int i=1;i<=5;i++ ){
        for(int j= 1; j<=5; j++){

            if((i>0 && j==1) || i>0 && j==5 ||   i==3   ){
                printf("*");
            }else{
                printf(" ");
            }

        }
        printf("\n");

    }

    printf("\n");//A

    for(int i=1;i<=5;i++ ){
        for(int j= 1; j<=5; j++){

            if((i>=2 && j==1) || i>=2 && j==5 ||   i==3  || (i==1 && j>1 && j<=4 ) ){
                printf("*");
            }else{
                printf(" ");
            }

        }
        printf("\n");

    }


    



    return 0;
}