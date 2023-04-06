#include <stdio.h>
/// worng haiiiiiiiiiiiiiii
/// @return
int main()
{

    int arr[] = {1, 2, 3,8};
    int newarry[] = {4, 5, 6,7};


    int size_of_arr = sizeof(arr) / sizeof(arr[0]);        // size of array
    int size_of_newarry = sizeof(arr) / sizeof(arr[0]);    // size of array
    int size_of_unionarry = size_of_arr + size_of_newarry; // size of array
    int unionArray[size_of_unionarry];


    printf("arr");

    int i = 0;
    int j = 0;
    int x = 0;

    while (size_of_arr > i || size_of_newarry > j)
    {
        if (size_of_arr > i)
        {
            unionArray[x++] = arr[i++];
            
        }

        if(size_of_newarry > j){
            unionArray[x++] = newarry[j++];
            
        }
    }

    printf("\n");

    printf("union arry");
    for (int i = 0; i < size_of_unionarry; i++)
    {
        printf(" %d", unionArray[i]);
    }

    return 0;
}