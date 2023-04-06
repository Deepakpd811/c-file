#include<stdio.h>


int main(){

    char ch ;
    scanf("%c",&ch);

    if(ch >=65 && ch<=90 || ch >=97 && ch<=122 ){
        printf("it is alphabet");
    }else if (ch>=48 && ch <=57){
        printf("it is number");
    }else{
        printf("it is symbol");
    }
    


    return 0;
}