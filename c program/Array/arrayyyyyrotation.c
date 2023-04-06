#include <stdio.h>

int main() {
    int n=5;
    int arr[5]= {1,2,3,4,5};
    int sum;
    for (int i = 0; i < n; i++) {
        sum = arr[(i)] + arr[(i+1)] + arr[(i+2)];
        
        // sum =0;
        // printf("-->%d\n",(i+4)%n);
        // sum = arr[(i+1)] + arr[(i+2)] + arr[(i+3)];
        printf("%d ", sum);
    }
    printf("\n");
    return 0;
}
