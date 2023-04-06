#include <stdio.h>

int main()
{

    // for(int i = 1; i<=5; i++){

    //     for(int k=1; k<=i; k++){
    //         printf("  ");
    //     }
    //     for(int j = 5; j>=i; j--){
    //         printf("* ");
    //     }

    //     printf(" \n");
    // // }

    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int k = 5; k >= i; k--)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = 2; j <= i; j++)
    //     {
    //         printf("*");
    //     }

    //     printf(" \n");
    // }

    // for(int i=1; i<=6; i++){

    //     for(int j=1; j<=i; j++){
    //         printf("*");
    //     }

    //     printf("\n");
    // }
    // for(int i=1; i<=6; i++){

    //     for(int j=5; j>=i; j--){
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    //      *
    //     **#
    //    ***##
    //   ****###
    //  *****####
    //   ****###
    //    ***##
    //     **#
    //      *

    // int n=5;

    // for(int i=1; i<=n; i++){

    //     for(int j=n; j>=i;j--){
    //         printf(" ");
    //     }
    //     for(int k=1; k<=i; k++){
    //         printf("*");
    //     }
    //     for(int k=2; k<=i; k++){
    //         printf("#");
    //     }
    //     printf("\n");
    // }
    // for(int i=n; i>=1; i--){

    //     for(int j=n; j>=i;j--){
    //         printf(" ");
    //     }
    //     for(int k=1; k<=i; k++){
    //         printf("*");
    //     }
    //     for(int k=2; k<=i; k++){
    //         printf("#");
    //     }
    //     printf("\n");
    // }




    // int sum = 0;
    // for (int i = 1; i <= 5; i++)
    // {

    //     for (int j= 1; j <= i; j++)
    //     {
    //         sum = sum + 1;
    //         printf("%d",sum);
    //     }
    //     printf("\n");
    // }j

    for(int i = 1;i<=3;i++){

        for(int j=1; j<=5;j++){
            
            if(i==1 || j==1 || i==3 || j==5){
                printf("%d",j);
            }else{
                printf(" ");
            }

        }

        printf("\n");
    }

    return 0;
}
