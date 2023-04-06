#include<stdio.h>

int main(){
    
    int n = 1111;
    
    int rem;
    int sum =0;
    int pow=1;
    
    while(n!=0){
        
        printf("%d\n",pow);

        rem = n%10;
        if(rem==1){
            sum += pow;
        }

        pow *= 2;
       
        
        n /= 10;
        
    }
    
    printf("sum_>>%d",sum);
    
    
    return 0;
}