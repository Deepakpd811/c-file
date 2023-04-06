#include<stdio.h>
//check the side of the traingel equal or not

int main(){

    int s1,s2,s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    if(s1==s2 && s2==s3){
        printf("triangle is equal");
    }else{
        printf("not equal");
    }

    





    return 0;
}