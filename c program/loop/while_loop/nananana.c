#include <stdio.h>
// int main()
// {
//     int a ;
//     int b ;
//     char choice;
    

//     do
//     {
//         printf("\nEnter a \n");
//         scanf("%d %d\n",&a,&b);
        
//         printf("Enter choice  \n");
//         scanf("%c", &choice);
//         switch (choice)
//         {
//         case '+':
//             printf("%d", (a + b));
//             break;
//         case '-':
//             printf("%d", (a - b));
//             break;
//         case '*':
//             printf("%d", (a * b));
//             break;
//         case '/':
//             printf("%d", (a / b));
//             break;
//         }
    
//     } while (choice !='0');
// }





















#include<stdio.h>
int main(){
    int a,b;
    char choice;
    printf("enter a,b \n");
    scanf("%d %d",&a,&b);
    printf("enter choice\n");
    scanf("%c",&choice);
    do{
        switch(choice){
            case'+':
            printf("%d",(a+b));
            break;
            case'-':
            printf("%d",(a-b));
            break;
            case'*':
            printf("%d",(a*b));
            break;
            case'/':
            printf("%d",(a/b));
            break;


        }
        
    }while(choice=='+'||choice=='-'||choice=='*'||choice=='/');
}












/// chek wheathe given number is perfect or not perfest