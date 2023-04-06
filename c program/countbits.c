#include <stdio.h>
int countsetbits(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            count++;
            printf("\nmum -> %d\n",num);
        }
        num = num / 2;
    }
    return count;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", countsetbits(num));
    }
    return 0;
}