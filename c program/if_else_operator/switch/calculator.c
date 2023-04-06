#include<stdio.h>

int main(){
    printf("a+b  \n");
    float a,b;
    char c;
    
    scanf("%f" "%c" "%f", &a, &c, &b);
   
    switch (c)
    {
    case '+':
        printf("%f\n",a+b);
        break;
    case '-':
        printf("%f\n",a-b);
    case '*':
        printf("%f\n",a*b);
    case '/':
        if (b==0){
            printf("undifined");
        }
        printf("%d\n",a/b);

    default:
        break;
    }


    return 0;
}