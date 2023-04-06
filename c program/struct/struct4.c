#include<stdio.h>


struct emplyoee
{
    char* name[40];
    int id;   
};

struct emplyoee display(struct emplyoee *p){

    //  p->name =45;
        p->id = 101;
    // // p->name = "deepak";

    return *p;
}



int main(){

    struct emplyoee e1 = {"rahul",131};
    struct emplyoee e2 = {"mohan",455};

    struct emplyoee x = display(&e1);
    
    printf("%d",x.id);
    printf("%s",x.name);

    return 0;
}