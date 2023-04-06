#include <stdio.h>

int main()
{
    int n=0;

    while (n!=5){
    char jolikhnehai[50];
    printf("likho bhai : ");
    scanf("%s",&jolikhnehai);



    FILE *filepointer;

    filepointer = fopen("newfile.txt","a");

    if(filepointer == NULL){
        printf("file is null");
    }else{

        fputs(jolikhnehai,filepointer);
        fputs("\n",filepointer);

    }
    
    fclose(filepointer);
    n++;
    }

    FILE *fptr;

    fptr = fopen("newfile.txt", "r");

    char str[10];
    
    while (fscanf(fptr, "%s %s %s ", str) == "mohan")
        printf("%s\n", str);

    printf("%s",str);
   



    return 0;
}
























 // fprintf(fptr, " data append ");

    // // fptr = fopen("newfile.txt", "r");

    // char mystring[40]; /// read only

    // while (fgets(mystring, 40, fptr))
    // {
    //     printf("%s", mystring);
    // }