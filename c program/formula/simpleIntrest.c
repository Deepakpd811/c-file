#include<stdio.h>

int main(){

    //(p * R *t)/100

    float p, r;
    int t ;
    printf("Enter principle\n");
    scanf("%f",&p);
    
    printf("Enter rate of intrest\n");
    scanf("%f",&r);

    printf("Enter time\n");
    scanf("%d",&t);



    

    float simple = (p*r*t)/100;

    printf("%.2f percent",simple);





    return 0;
}