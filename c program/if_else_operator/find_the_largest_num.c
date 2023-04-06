#include<stdio.h>

//greatest num from three input

int main(){
    int num1, num2, num3;
   

    printf("enter num1 ");
    scanf("%d",&num1);
    printf("enter num2 ");
    scanf("%d",&num2);
    printf("enter num3 ");
    scanf("%d",&num3);

// //    1   2      3


    if(num1>num2 && num1>num3){
        printf("num1 is the greatest = %d",num1);
    }
    else if(num2>num3 && num2>num1){
        printf("num2 is the greatest = %d",num2);
    }
    // if(num3>num1 && num3>num1){
        else{
        printf("num3 is the greatest = %d", num3);
    }

//method2

    // if(num1>num2 ){
    //     if(num1>num3){
    //         printf("num1 is the greatest");
    //     }
    // }else if(num2>num3){
    //     if(num2>num1){
    //         printf("num2 is the greatest");
    //     }
    // }else{
    //     printf("num3 is the greatest");
    // }

 


    return 0;
}