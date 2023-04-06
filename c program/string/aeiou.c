#include<stdio.h>

int main(){

    char a[] = "hi my name is deepak";
    int vowel = 0;
    int cons = 0;

    for (int i = 0; a[i] !='\0'; i++)
    {
       switch (a[i])
       {
       case 'a':
            vowel++;
            break;
       case 'e':
            vowel++;
            break;
       case 'i':
            vowel++;
            break;
       case 'o':
            vowel++;
            break;
       case 'u':
            vowel++;
            break;
        
       default:
         cons++;
        break;
       }
    }
    

    printf("vowel --> %d\n",vowel);
    printf("consonent -->%d\n",cons);

    return 0;
}