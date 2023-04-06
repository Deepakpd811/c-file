#include <stdio.h>
#include <math.h>


int main(){
    
  
    int test,i,j,sizarr=0;
    int dec =0;

    scanf("%d",&test);
    
    while(test>0){
        
        scanf("%d",&sizarr);
        
        int arr[sizarr];
        
        for(i=0; i<sizarr; i++){
            scanf("%1d",&arr[i]);
        }
        
        for(j=0;j<sizarr;j++){
            
            
                
            dec = dec + arr[j] * pow(2,j);
            
           
            
        }
    
       
        
        printf("%d",dec);
        test--;
    }
    
    
    
    return 0;
}