#include<stdio.h>


int main(){

    int n;
    printf("enter a num");
    scanf("%d",&n);

    for(int i = 1; i<=100; i++){
        printf("%d * %d = %d \n", n, i ,i * n);
    }

    





    return 0;
}