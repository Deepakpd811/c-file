#include <stdio.h>
#include <string.h>

void frequencycount(char *str)
{

    int vc = 0;
    int consonent = 0;
    int space = 0;
    int digit = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vc++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            consonent++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
    }

    printf("vowel is %d\n", vc);
    printf("consonent is %d\n", consonent);
    printf("space is %d\n", space);
    printf("digit is %d\n", digit);
}

int main()
{

    char str[100] = "Ram Got 100 Marks in Hindi";
    // char str[100] = "deepak";
    frequencycount(str);

    return 0;
}
