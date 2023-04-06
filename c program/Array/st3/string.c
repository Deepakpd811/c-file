#include <stdio.h>
int parenthesis(int n, int open, int close, int idx, char *ans)
{

    if (idx == 2 * n)
    {
        printf("%s\n", ans);
    }

    if (open < n)
    {
        ans[idx] = '(';
        parenthesis(n, open + 1, close, idx + 1, ans);
    }
    if (close < open)
    {
        ans[idx] = ')';
        parenthesis(n, open, close + 1, idx + 1, ans);
    }
}
int main()
{
    char ans[100] = "";
    int n;
    scanf("%d", &n);
    parenthesis(n, 0, 0, 0, ans);
}