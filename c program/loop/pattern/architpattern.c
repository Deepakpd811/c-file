#include<stdio.h>

// 4444444
// 4333334
// 4322234
// 4321234

// 4322234
// 4333334
// 4444444



int main(){

    int n = 4;


     for(int i=n; i>=1; i--){
        
        for (int j = n; j>=i; j--)
        {
            printf("%d",j);
        }

        
        for (int k = n-i; k<=i; k++)
        {
            printf("%d", i);
            
        }
        int val = i;
        for (int k = n; k>=i; k--)
        {
            if(i==1 && val==i){
                val++;
                continue;
            }
            printf("%d", val);
            val++;
            
        }
        printf("\n");
    }



     for(int i=2; i<=n; i++){
        
        for (int j = n; j>=i; j--)
        {
            printf("%d",j);
        }

        
        for (int k = n-i; k<=i; k++)
        {
            printf("%d", i);
            
        }
        int val = i;
        for (int k = n; k>=i; k--)
        {
            if(i==1 && val==i){
                val++;
                continue;
            }
            printf("%d", val);
            val++;
            
        }
        printf("\n");
    }

    

    return 0;
}