#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){

    char str[] = "12.45.75";
    int arr[3];
    char newstr[10];
    int n;
    int cnt=0;

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if(str[i]!='.'){
            newstr[i]=str[i];
        }

        n = atoi(newstr);

        arr[i]= n;

    }
    
    for(int j=0; j<3; j++){
        printf("%d",arr[j]);
        printf("\n");
    }
    
    
    


    printf("%d",n);
    



    return 0;
}