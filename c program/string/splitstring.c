#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main()
{
    char sourceString[] = "123.745.25";
    char arr[5];
    char arry[3] ={0};
    char oct[4] = { 0 }, cnt = 0, cnt1 = 0, i, buf[5];

    int len = strlen(sourceString);
    printf("len%d\n",len);

    //   for (i = 0; i<len; i++)
    // {
    //     if (str[i] != '.')
    //     {
    //         arr[j++] = str[i];
            
    //     }
    //     if(str[i] == '.' || i==len-1){
    //         arr[j] = '\0';
    //         j=0;
    //         arry[k++] = atoi(arr);
    //     }
      

    // }

     for (i = 0; i < len; i++) {
        if (sourceString[i] != '.') {
            buf[cnt++] = sourceString[i];
        }
        if (sourceString[i] == '.' || i == len - 1) {
            buf[cnt] = '\0';
            cnt = 0;
            oct[cnt1++] = atoi(buf);
        }
    }
  

    // printf("%s%n",arr);
    for (int i = 0; i < 4; i++)
    {
    printf("%d\n",oct[i]);
        /* code */
    }
    
        

    return 0;
}