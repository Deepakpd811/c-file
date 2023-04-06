#include <stdio.h>

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main()
{

    // int sum = 0;

    // for(int i=1; i<=n;i++){

    //     for(int j=1; j<=i; j++){
    //         sum +=1;
    //         printf("%d ",sum);
    //     }
    //     printf(" \n");
    // }
    // int n = 5;
    // int k=0;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         printf("*");
    //     }
    //     int val = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d", val);
    //         val++;
    //     }
    //     int xval = val -2;
    //     for(k=xval;k>=i;k--)
    //     {
    //         printf("%d",xval--);
    //     }

    //     printf("\n");
    // }

    // int n= 5;
    // int i, j;
    // for(i=1;i<=5;i++)
    // {
    //   for(j=5;j>i;j--)
    //     printf(" ");
    //     int val=i;
    //   for(j=1;j<=i;j++)
    //       printf("%d",val++);

    //      int x= n;
    //   for(j=j-2;j>=1;j--)
    //       printf("%d",n++);
    //   printf("\n");
    // }

    //    char n ='F';

    //     for (int  i = 'A'; i <= n; i++)
    //     {
    //         for (int j = 'A'; j <= i; j++)
    //         {
    //             printf("%c ",i);
    //         }

    //         printf("\n");
    //     }

    int n, i, j, s, k;
    printf("enter");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (s = n; s > i; s--)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (k = 2; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}