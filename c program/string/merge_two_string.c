#include<stdio.h>
#include<string.h>


int main(){

    char word1[50];
    char word2[50];
    scanf("%s",&word1);
    scanf("%s",&word2);

    int lenw1= strlen(word1);
    int lenw2 = strlen(word2);

    char newword[lenw1+lenw2+1];

    int i=0;
    int j=0;
    int x=0;
                                //abc pqr apbqrc
    while (lenw1>i || lenw2>j)  
    {
        if(i<lenw1){
            newword[x++] =word1[i++];
        }
        if(j<lenw2){
            newword[x++]= word2[j++];
        }
        newword[x]='\0';
        
    }
    

       

    // printf("%d",lenw1+lenw2);
    printf("%s",newword);


    


    return 0;
}
