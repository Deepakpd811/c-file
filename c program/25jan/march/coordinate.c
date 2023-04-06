#include<stdio.h>

int coordinate(int x, int y){

    if(x>=0 && y>=0){
        return 1;
    }else if(x<0 && y>0){
        return 2;
    }else if(x<0 && y<0){
        return 3;
    }else if(x>=0 && y<0){
        return 4;
    }



}


int main(){

    int n,m;
    scanf("%d %d",&n, &m);

    printf("quadrant is %d", coordinate(n,m));




    return 0;
}