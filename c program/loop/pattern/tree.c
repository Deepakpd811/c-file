#include <stdio.h>

int main(){
    int n = 5;
    
    
     

//    for (int i = 1; i <= n; i++)
//    {
//     int jh = i;
//     for(int j = 1; j<=i; j++){
        
//         printf("%d",jh);
//         jh--;
       
//     }

//     printf("\n");
//    }
   for (int i = 1; i <=n; i++)
   {
   
    
    for(int j = 1; j<=i; j++){
        
        printf("%d",j);
        
       
    }
    for(int j = n-1; j>=i; j--){
        
        printf(" ");
        
       
    }
    for(int j = n-1; j>=i; j--){
        
        printf(" ");
        
       
    }
    int jh = i;
    for(int j = 1; j<=i; j++){
        
        printf("%d",jh);
        jh--;
        
       
    }

    printf("\n");
   }
   



    return 0;
}