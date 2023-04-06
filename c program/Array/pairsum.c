#include <stdio.h>

// int main()
// {

    // int arr[5]= {1,2,3,4,5};
    // int len = sizeof(arr)/sizeof(arr[0]);
    // int num = 8;

    // for(int i=0; i<len; i++){
    //     for (int j = i+1; j < len; j++)
    //     {
    //         int sum = arr[i] + arr[j];
    //         if(sum == num){
    //             printf("pair %d %d\n", arr[i],arr[j]);
    //         }
    //     }

    // }

    // int i, j, k, sum = 0;
    // int count = 0;

    // int n = 5;
    // int target = 3;

    // int arr[5] = {1, 2, 3, 4, 5};
    // // for(i=0;i<n;i++){
    // //     scanf("%d",&arr[i]);
    // // }

    // for (j = 0; j < n; j++)
    // {
    //     for (k = j + 1; j < n; k++)
    //     {
    //         sum = arr[j] + arr[k];
    //         if (sum == target)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // printf("%d", count);




// void merge(int arr1[], int n, int arr2[], int m, int res[]){
    
//     int i=0,j=0,k=0;
    
//     while(i<n && j<m){
//         if(arr1[i] < arr2[j]){
//             res[k]= arr1[i];
//             k++;
//             i++;
//         }else{
//             res[k] =arr2[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n){
//         res[k]= arr1[i];
//         k++;
//         i++;
//     }
//     while(j<m){
//         res[k]= arr2[j];
//         k++;
//         j++;
//     }
     
    
    
// }


int main(){
    
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n;i++){

        scanf("%1d",&arr[i]);
    }

    for(int i=0; i<n;i++){

        printf("%d",arr[i]);
    }
    
    
    
    
    return 0;
}

