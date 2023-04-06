// #include<stdio.h>

// int main(){

//     // char arr[4][4]= {"kl","pb","hr","br"};

//     // printf("%d", arr[0]);

//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j < 4; j++)
//     //     {
//     //         printf("%c i->%d j->%d \n",arr[i][j],i,j);
//     //     }

//     // }

//     // int chararr[4];
//     // int j=0;
//     // for (int i = 0; i < 4; i++)
//     // {
//     //     for (int j = 0; j < 2; j++)
//     //     {
//     //         if(j==0){

//     //             printf("%d i->%d j->%d \n",arr[i][j],i,j);

//     //         }
//     //     }

//     // }

//     // for (int  i = 0; i < 4; i++)
//     // {
//     //     printf("%c",chararr[i]);
//     // }

//     return 0;
// }

#include <stdio.h>

int main()
{

    int i, j;
    int sum = 0;
    int n=3;
    int m=2;


    int arr[3][2] = { {1, 2},
                      {3, 4},
                      {5, 6}
    };

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum += arr[j][i];
            // printf("ele %d-.",arr[j][i]);
        }
        printf("%d ", sum);
        sum = 0;
    }

    return 0;
}