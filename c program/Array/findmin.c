#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    int max = arr[0];


 
    for(int i=0; i<n; i++){
        
        if(min>arr[i]){             //23<23
            min = arr[i];         //10<23
        }
        if(max<arr[i]){
            max = arr[i];
        }
    }

    printf("min->%d max-> %d",min,max);
    

    return 0;
}