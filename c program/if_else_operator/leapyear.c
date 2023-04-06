#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);

    if(year % 400 == 0 && year % 4 ==0 ){
        printf(" %d is a leap year ",year);
    }else if (year % 100 !=0 ){
        printf(" %d is not a leap year ",year);
    }else{
        printf("invalid output");
    }

    // printf(" reminder %d\n", 2024%4); ///reminder
    // printf("%d\n", 2024/4); 

    // printf("%d", 2000%400);


    return 0;
}