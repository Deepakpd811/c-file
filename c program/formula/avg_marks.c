#include <stdio.h>

int main()
{

    int j;
    printf("Number of subjects :\n");
    scanf("%d", &j);
     float sum = 0;
    
    for (int i = 0; i<j; i++)
    {
        float a;

        printf("Enter marks : \n");
        scanf("%f", &a);
        sum = sum + a;
    }

    float result = (sum) / 3;
    printf("%f", result);

    return 0;
}