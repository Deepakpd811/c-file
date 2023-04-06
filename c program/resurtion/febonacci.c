#include<stdio.h>

int fibo(int n){


    if (n==0)
    {
        return 0;
    }else if (n==1)
    {
        return 1;
    }else{
        
        return fibo(n-1)+fibo(n-2);

    }
    
    
}


int main(){

    int check = 3;
    int flag = 0;

    for(int i=0; i<20;i++){

        if (check == fibo(i)){
            flag++;
        }



          printf("%d ",fibo(i));
    }

    if(flag ==1){
        printf("yes fibo");
    }else{
        printf("no fibo");
    }
    

  


    return 0;
}


// 0 1 1 2 3 5 8
//fab(0)-> 0
//fab (1) -> 1 + fact(0)
//fab(2) -> 2 + fact(1)
