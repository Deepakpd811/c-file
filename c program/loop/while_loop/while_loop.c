#include <stdio.h>

// write a c program to print or execute mini calculator using do-while loop

int main()
{

    int i = 0;
    int a, b;
    printf("Enter num1 ");
    scanf("%d", &a);
    printf("Enter num2 ");
    scanf("%d", &b);

    do
    {
        printf("Enter 1 for a+b \n");
        printf("Enter 2 for a-b \n");
        printf("Enter 3 for a*b \n");
        printf("Enter 4 for a/b \n");
        printf("Enter 0 for exit \n");
        scanf("%d", &i);

        switch (i)
        {
        case 0:
            break;
        case 1:
            printf("%d\n", a + b);
            break;
        case 2:
            printf("%d\n", a - b);
            break;
        case 3:
            printf("%d\n", a * b);
            break;
        case 4:
            printf("%d\n", a / b);
            break;

        default:
            printf("invalid");
            break;
        }
    } while (i != 0);

    return 0;
}