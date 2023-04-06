#include<stdio.h>


int main(){
    int x;
    printf("First Term :");
    scanf("%d",&x);
    int n ;
    printf("Last Term :");
    scanf("%d",&n);
    int cd ;
    printf("Common Difference :");
    scanf("%d",&cd);
    int sum =0;
    for(int i=x; i<=n; i+=cd){
        
        printf("%d\n",i);
        sum += i;
    }
    printf("Sum of AP is %d",sum);

    return 0;
}