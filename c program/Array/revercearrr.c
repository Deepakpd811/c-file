#include<stdio.h>


void swap(int *a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void revarr(int arr[], int n){
    
    int val = n-1;

    for (int i = 0; i < n/2; i++)
    {
        swap(&arr[i],&arr[val]);
        val--;
    }

}



int main(){

    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    revarr(arr,n);

    for(int j=0;j<n;j++){
        printf("%d",arr[j]);
    }
    

    return 0;
}
