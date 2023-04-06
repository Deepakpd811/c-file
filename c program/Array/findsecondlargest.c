#include <stdio.h>

int main()
{

    // int arr[5] = {12, 35, 34, 10, 37};
    // int max =0, smax = 0;
    // int min =arr[0], smin = arr[0];

    // for (int i = 0; i < 5; i++)
    // {
    //     if(max<arr[i]){
    //         max = arr[i];

    //     }
    //     if(smax<arr[i] && arr[i] != max){
    //             smax = arr[i];
    //         }
    //     if(min>arr[i]){
    //         min = arr[i];
    //     }
    //     if(smin>arr[i] && arr[i]!=min){
    //         smin = arr[i];
    //     }
    // }

    // printf("max->%d smax->%d\n",max,smax);
    // printf("min->%d smin->%d\n",min,smin);

    // printf("difference between  smax-smin = %d", smax -smin );

    int n, i, j;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%1d", &arr[i]);
    }

    int max = arr[0];
    int smax = arr[0];
    int min =  arr[0];
    int smin =  arr[0];

    // for (j = 1; j < n; j++)
    // {
    //    if(max <arr[j]){
    //         smax = max;
    //         max = arr[j];
    //    }else if (smax < arr[j] && smax != max){
    //         smax = arr[j];
    //    }
    
    //    if(min > arr[j]){
    //         smin = min;
    //         min = arr[j];
    //    }else if (smin > arr[j] && smin != min){
    //         smin = arr[j];
    //    }



    // }

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }

        if (arr[i] < min) {
            smin = min;
             min= arr[i];
        } else if (arr[i] < smin && arr[i] != min) {
            smin = arr[i];
        }
    }

    printf("max-> %d\n", max);
    printf("smax-> %d\n", smax);

    printf("min -> %d \n", min);
    printf("smin %d\n",  smin);

    return 0;
}