#include<stdio.h>


int string_len(char a[]){

    int count=0;

    for(int i =0; a[i]!='\0'; i++){
        count++;
    }
    return count;
}

int compString(char a[],char b[]){
    int flag =0;

     for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;

    //     if (a[i] != b[i])
    //     {
    //         flag = 1;
    //     }
    //     else
    //     {
    //         flag = 0;
    //     }
        
    // }

    // if(flag == 0){
    //         printf("equal");
    //     }else{
    //         printf("not equal");
    //     }
}




int main(){

    
    
   
    int n = string_len("deepak");
    printf("lenght of string is %d\n",n);
    

    int ans=compString("aa","deepak");


    if(ans==1){
        printf("SAME!!!");
    }else{
        printf("dhat teri mkc");
    }
    


    return 0;
}