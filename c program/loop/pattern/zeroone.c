#include <stdio.h>

int main()
{

    /*int n = 10;
    int x,y;

    for(int i = 1; i<=n; i++){
      
        if(i%2 == 0){
            x = 1;
            y = 0;
        }else{
            x = 0;
            y = 1;
        }


        for (int  j = 1; j <=i; j++)
        {
           if (j%2==0){
            printf("%d",x);
           }else{
            printf("%d",y);

           }
          
        }
        printf("\n");
    }*/
    int i,j;
    int a=65;
    for(int i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            printf("%c",(a+i-1));
        }
        a+=1;
        printf("\n");
    }

    return 0;
}