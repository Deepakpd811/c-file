#include <stdio.h>

int fact(int n)
{
    int count = 0;

    if (n == 0)
    {
        return 0;
    }
    else
    {

        return n + fact(n - 1); // 5 4 3 2 1
    }
}

int main()
{

    int result = fact(3);
    printf("%d", result);

    // int i=3 ;

    // for(i;i>1;i--){
    //     printf("hello\n");
    // }

    return 0;
}