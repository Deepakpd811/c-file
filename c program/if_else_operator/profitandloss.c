#include<stdio.h>


int main(){

    int mp = 500;
    int sp = 600;

    if (sp>mp){
        printf("profit by "); 
        int p = sp-mp;
        
        printf("%d\n" , p );
        
    }
    else{
        printf("losss by ");
        int l = mp - sp;
        printf("%d", l);
    }

   


    return 0;
}