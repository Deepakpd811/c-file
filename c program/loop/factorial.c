#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    double fact =n;

    for(int i = (n-1); i>=1; i--){
        
        fact = fact * i;
         //printf("-- %d\n",fact);
         
        
    }

    printf("-- %.21f\n",fact);



    return 0;
}