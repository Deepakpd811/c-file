#include<stdio.h>
#include<stdlib.h>

void revstr(char str[],int n){
    if(n<0){
        return;
    }
    
    
    printf("%c",str[n]);
    revstr(str,n-1);

   

}





int main(){

    char str[10];

    printf("enter string\n");
    scanf("%s",&str);
    
    int len = strlen(str);

    int n = atoi(str);
    printf("reverse string");
    revstr(str,len);

    printf("\n integer is n %d",n);


    return 0;
}