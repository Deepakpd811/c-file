#include <stdio.h>

int main()
{

    printf("Enter the size of array\n");
    int size;
    scanf("%d",&size);

    

    int arr[size];

    for (int  i = 0; i < size; i++)
    {
        printf("enter the element at %d pos \n",i+1);
        scanf("%d",&arr[i]);
    }

    printf("array is ");

    for (int  i = 0; i < size; i++)
    {
       printf(" %d",arr[i]);
    }
    
   


    return 0;
}