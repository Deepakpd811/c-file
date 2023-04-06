#include<stdio.h>
#include<string.h>


int main(){

    char str[100];

    gets(str);

    printf("%s",str);
    int count =1;

    for (int  i = 0; str[i] !='\0'; i++)
    {
        if(str[i] == ' '){
            count++;
        }
    }
    
    printf("%d",count);


    


    return 0;
}
