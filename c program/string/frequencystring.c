#include <stdio.h>


int main()
{

    char input_str[] = "deepak ";

    int frequency[256] = {0};

    for (int i = 0; input_str[i] != '\0'; i++)
    {
        frequency[(int)input_str[i]]++;
    }

    for (int i = 0; input_str[i] != '\0'; i++)
    {
        if(frequency[input_str[i]]){

        printf("%c %d\n",input_str[i],frequency[input_str[i]]);
        
        frequency[input_str[i]] =0;
        }

        
    }
    
     
  

   

    return 0;
}