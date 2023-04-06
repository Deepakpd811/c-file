#include <stdio.h>


int main() {
    int a=10;
    char c;
    /*int b=20;
    if(a<0){
        printf("negative number");
    }else if(a>0){
        printf("positive number");
    }
    else{
        printf("doesnot exist");
    }
    printf("%d \n",sizeof(a));
    printf("%lu",sizeof(c));*/
    int num1,num2;
    printf("enter num1\n");
    scanf("%d", &num1);
    printf("enter num2\n");
    scanf("%d", &num2);
    if(num1==num2){
        printf("EQUAL");
    }
    else{
        printf("NOT EQUAL");
    }


   
    return 0;
}
