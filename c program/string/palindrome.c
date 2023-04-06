#include <stdio.h>
#include <string.h>

int checkpalindrome(char arr[])
{

    char str2[10];

    strcpy(str2, arr);
   
    int len = strlen(str2); // m a t t e e
    
    char temp;

    for (int i = 0; i < len / 2; i++)
    {
        temp = str2[i];
        str2[i] = str2[len - i - 1];
        str2[len - i - 1] = temp;
    }

    return strcmp(str2,arr);
    
}

int main()
{

    char a[] = "maam";

    int res = checkpalindrome(a);

    if (res == 0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;
}