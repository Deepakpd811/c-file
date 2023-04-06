#include<stdio.h>


struct person
{
    char name[50];
    int roll;
   
};

void display(struct person *p){
    printf("%s %d\n", p->name, p->roll);

}




int main(){

    struct person p1 = {"rohan",32};
    struct person p2 = {"rahil",31};
   

    display(&p1);
    display(&p2);

    

    


    return 0;
}