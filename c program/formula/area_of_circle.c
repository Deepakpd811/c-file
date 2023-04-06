#include<stdio.h>

int main(){

    int radius;
    printf("radius = ");
    scanf("%d",&radius);

    const int  pi = 3.14;

    int area = pi*(radius*radius);

    printf("the area of circle %d",area);




    return 0;
}