#include <stdio.h>
int main()
{
    for (int i = 1; i <= 26; i++)
    {
        char ch;
        int unit;
        printf("Enter house name and units used: \n");
        scanf("%c %d", &ch, &unit);
        if (ch >= 'A' && ch <= 'Z')
        {
            if (unit <0 )
            {
                printf("unit cant be negative\n");
            }
            else if (unit <=300 )
            {
               
                printf("Bill is Free for %c\n", ch);
            }
            else if (unit >= 300 && unit <= 500)
            {
                printf("Bill for %c is Rs %f\n", ch, (unit - 300) * 6.3);
            }
            else if (unit >= 500)
            {
                printf("Bill for %c is Rs %f\n", ch, (unit - 300) * 7.1);
            }
        }
        else
        {
            printf("Invalid House name\n");
        }
    }
}