#include <stdio.h>

int main()
{

    int arr[5] = {1, 3, 4, 5, -1};
    int n, p;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
        else
        {
            n++;
        }
    }

    printf("positive count %d\n", p);
    printf("%d\n", n);

    return 0;
}