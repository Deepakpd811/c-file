#include<stdio.h>
#include<string.h>
int main(){

    char name[] = "deepakMohan";
    int len = strlen(name);

    for (int  i = 0; i < len; i++)
    {
        if(name[i]>='a' && name[i]<'z'){
            name[i] = name[i]-32;
        }
    }
    
    printf("%s",name);

    
    



    return 0;
}