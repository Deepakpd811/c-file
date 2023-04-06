#include<stdio.h>

typedef struct student
{
    char *name[50];
    int id;
    int roll;
}class;

// int manager(){

//     class manager = {"rohan"};
//     printf("%s",manager.name);

// }

int main(){
    int i;

    class s1[5];

    for(i=0; i<5; i++){
        printf("enter name \n");
        scanf("%s", &s1[i].name);
        printf("enter id \n");
        scanf("%d",&s1[i].id);
        printf("enter roll \n");
        scanf("%d",&s1[i].roll);
    }
    for(i=0; i<5; i++){
        printf("name %s\n",s1[i].name);
       
        printf("id %d\n",s1[i].id);
        printf("roll %d\n",s1[i].roll);
       
    }




    

   

    return 0;

}