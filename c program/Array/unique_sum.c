#include <stdio.h>



int main()
{
    int n=4;
    int arr[] = {1,1,1,1};
    //           0 1 2 3 4 
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        
           for (int j = i; j < n; j++)
           {
                if(arr[i]==arr[j] && i!=j){

                 printf("%d %d\n",arr[i],arr[j]);
                    arr[i]=0;
                    arr[j]=0;
                 
                }
           }
           
        
        
    }
    for (int i = 0; i < n; i++)
    {
        
          printf("%d",arr[i]);
           
        
        
    }

   

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("\nsum is %d",sum);

    
    
   

    return 0;
}