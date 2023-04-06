#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

// typedef struct student {
//     char* name;
//     int id;

// }student;

// display(student *s){
//     printf("%s %d", s->name, s->id);
// }

// int main()
// {
//     student s1= {"deepak",201};

//     display(&s1);

//     return 0;
// }

// struct student
// {
//  char name[50];
//  int roll;
//  char grade;
//  int marks[3];
//  float avg;
// };
// int main()
// {
//  struct student stu;
//  stu={.marks[0]=88,.marks[1]=87,.marks[2]=90};
//  printf("%d",stu.marks[2]);
//  printf("%d",stu.marks[1]);
//  printf("%d",stu.marks[0]);
// return 0;
// }
// union student
// {
//  int roll;
//  char grade;
//  float avg;
//  double val;
//  };
//  int main()
//  {
//  stu.roll=12;
//  stu.grade='A';
//  stu.avg=78.3234;
//  printf("%.2f\n",stu.avg);
//  return 0;
//  }

// void print_arr(int arr[], int n)
// {
//  if (n == 0)
//  return;
//  else
//  {
//  printf("%d ", arr[n - 1]);
//  print_arr(arr, n - 1);
//  }
// }
// int main()
// {
//  int arr[] = {1, 2, 3, 4, 5};
//  print_arr(arr, 5);
// }

// int count1s(int num){

//     int count =0;

//     while (num>0)
//     {
//         if(num%2==1){
//             count++;
//         }
//         num =num/2;

//     }

//     return count;

//     }

// int main()
// {
//     int n, num;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &num);
//         printf("counts 1s%d", count1s(num));
//     }
// }

// void permutation(char *str , indx){

//     if(indx == strlrn(str)){
//         printf("%s",str);
//         return
//     }

//     for(int i= indx; i<strlen(str); i++){

//         swap(str, i , idex)
//         permutation(str, idez+1)

//     }
// }

// void extractIpAddress(unsigned char* sourceString, short* ipAddress)
// {
//     unsigned short len = 0;
//     unsigned char oct[4] = { 0 }, cnt = 0, cnt1 = 0, i, buf[5];

//     len = strlen(sourceString);
//     for (i = 0; i < len; i++) {
//         if (sourceString[i] != '.') {
//             buf[cnt++] = sourceString[i];
//         }
//         if (sourceString[i] == '.' || i == len - 1) {
//             buf[cnt] = '\0';
//             cnt = 0;
//             oct[cnt1++] = atoi(buf);
//         }
//     }
//     ipAddress[0] = oct[0];
//     ipAddress[1] = oct[1];
//     ipAddress[2] = oct[2];
//     ipAddress[3] = oct[3];
// }

// int main()
// {
//     unsigned char ip[] = { 0 };
//     short ipAddress[4];

//     printf("Enter IP Address (xxx.xxx.xxx.xxx format): ");
//     gets(ip);

//     extractIpAddress(ip, &ipAddress[0]);

//     printf("\nIp Address: %03d. %03d. %03d. %03d\n", ipAddress[0], ipAddress[1], ipAddress[2], ipAddress[3]);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

/*
Function : extractIpAddress
Arguments : 
1) sourceString - String pointer that contains ip address
2) ipAddress - Target variable short type array pointer that will store ip address octets
*/






void extractIpAddress(unsigned char* sourceString, short* ipAddress)
{
    unsigned short len = 0;
    unsigned char oct[4] = { 0 }, cnt = 0, cnt1 = 0, i, buf[5];

    len = strlen(sourceString);
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
    ipAddress[0] = oct[0];
    ipAddress[1] = oct[1];
    ipAddress[2] = oct[2];
    ipAddress[3] = oct[3];
}

int main()
{
    unsigned char ip[] = { 0 };
    short ipAddress[4];

    printf("Enter IP Address (xxx.xxx.xxx.xxx format): ");
    gets(ip);

    extractIpAddress(ip, &ipAddress[0]);

    printf("\nIp Address: %03d. %03d. %03d. %03d\n", ipAddress[0], ipAddress[1], ipAddress[2], ipAddress[3]);

    return 0;
}