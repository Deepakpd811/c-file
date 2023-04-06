#include<stdio.h>

struct complex
{
    int real;
    int imge;
};

void addcomplex(struct complex c1 , struct complex c2, struct complex *result){
    result->real = c1.real + c2.real;
    result->imge = c1.imge + c2.imge;
}

int main(){

    struct complex c1 = {2,4};
    struct complex c2 = {1,7};
    struct complex result;
    

    addcomplex(c1,c2,&result);
    printf("%d %di", result.real, result.imge);


    return 0;
}