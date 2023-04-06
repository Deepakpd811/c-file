#include<stdio.h>


typedef struct 
{
    int age;
    char name[20];
    

}person;


int main(){

    person p1;

    p1.age = 30;
    // p1.name = "bharat";

    strcpy(p1.name,"bharat");
    printf("%d \n", p1.age)  ;  
    printf("%s", p1.name)  ;  


    return 0;
}

// int main(){
    
 

//     return 0;
// }