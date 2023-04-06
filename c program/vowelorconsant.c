#include<stdio.h>


int main(){
    printf("Enter only char");
    char c ;
    scanf("%c",&c);
    int x=c;

    

    if (x == 97 || x==101|| x==105|| x==111|| x==117|| x==65|| x==69|| x==73|| x==79|| x==85){
        printf("%c is vowels ",c);
    }else{
         printf("%c is consonents ",c);
    }


    // printf("%d\n" "%d\n" "%d\n" "%d\n" "%d\n",'A' ,'E','I' ,'O', 'U');

    return 0;
}