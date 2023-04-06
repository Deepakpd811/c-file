#include <stdio.h>
int main()
{
    int a[100]={1,2,3,4,100,43,66};
    int max = 0;

    for(int i =0; i<7;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    printf("%d",max);

    

     return 0;
}