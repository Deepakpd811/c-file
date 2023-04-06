#include<stdio.h>


int main(){
    printf("enter 0 for even \n 1 for odd");
    int input;
    scanf("%d",&input);

    for(int i=1; i<=100;i++){

        // printf("%d \t",i);

    if(i%2==0 && input==0){
        printf("%d \n",i );
    }else if(i%2 !=0 && input ==1)

        printf("%d \n",i );
    }



    return 0;
}