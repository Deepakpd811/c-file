#include <stdio.h>

int main()
{

    int n, r, m;
    scanf("%d %d %d",&n, &r, &m);

    int arr1[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[n][3];

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int ans=arr1[r-1][m-1] + arr2[r-1][m-1];

    printf("%d",ans);

    return 0;
}