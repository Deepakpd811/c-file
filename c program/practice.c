#include <stdio.h>
// 1234

int main()
{

    // int a[6] = {1, 2, 3, 4,5,6};
    // int sumeven=0;
    // int sumod = 0;
    // for (int i = 0; i < 6; i++)
    // {

    //     if (a[i] % 2 != 0)
    //     {
    //         sumod = a[i]+ sumod;
    //     }else{
    //         sumeven = a[i] + sumeven;
    //     }

    // }
    // printf("%d sum of odd \n",sumod);
    // printf("%d sum of even \n",sumeven);

    // int i = (1,2,3);

    // printf("%d",i);

    // char st[] = "CODING";

    // printf("While printing ");
    // printf (", the value returned by printf() is : %d");
    // printf ("%s", st);

    // int i = 01289;
    // printf("%d", i);
    {
        int arr[] = {1, 2, 3, 4, 5};
        *arr = *(arr + 3) + *(arr + 3);
        printf("%d", arr[0]);
    }

    printf("\n");

    return 0;
}