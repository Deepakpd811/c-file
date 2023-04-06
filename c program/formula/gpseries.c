#include<stdio.h>
#include<math.h>

int main(){

    int a = 1;
    int r = 2;

    for (int i = 1; i < 10; i++)
    {
        int num = pow(r,i);
        printf("%d \n", a * num);
    }
     



    return 0;
}