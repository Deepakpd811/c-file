#include<stdio.h>


int main(){

    int day ;
    printf("Enter the day");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("monday time ->>> 10:30 am to 12:45 pm ");
        break;
    case 2:
        printf("Tuesday time ->>>>> 12:45 pm to 3:00 pm");
        break;
    
    case 3:
        printf("Wednesday time ->>>>> 10:30 am to 12:45 pm");
        break;
    case 4:
        printf("thursday time ->>>>> 12:45 pm to 3:00 pm");
        break;
    case 5:
        printf("friday --->>> no class");
        break;
    case 6:
        printf("saturday ->>> holiday");
        break;
    case 7:
        printf("sunday ->>> holiday");
        break;
    default:
        printf("invalid input");
        break;
    
    }


    // int num ;
    // printf("Enter the number");
    // scanf("%d",&num);

    // (num %2 == 0) ? printf("The num  %d is even ",num) : printf("The num is odd");



    return 0;
}