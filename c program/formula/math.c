#include<stdio.h>
#include<math.h>


int main(){

    int a;
    scanf("%d",&a);

    int ceill = ceil(a);
    int floorr = floor(a);
    int sqrtt = sqrt(a);
    int poww = pow(a,3);
    int absolute = abs(a);


    printf("ceil %d \n",ceill);
    printf("floor %d \n",floorr);
    printf("sqrt %d \n",sqrtt);
    printf("power %d \n",poww);
    printf("absolute %d \n",absolute);


    return 0;
}