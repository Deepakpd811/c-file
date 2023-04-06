#include <stdio.h>

struct charset
{
    char s;
    int i;
};

void keyvalue(char *s, int *i)
{
    scanf("%c %d", s, i);
}

int main()
{

    struct charset c;

    keyvalue(&c.s, &c.i);
    
    printf("%c %d", c.s, c.i);

    return 0;
}