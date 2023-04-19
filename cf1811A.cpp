#include <stdio.h>

#define MAX 212345

char s[MAX];


int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i;
        char d;
        scanf("%d %c %s", &n, &d, s);
        for(i = 0; s[i] && s[i] >= d; i++)
            putchar(s[i]);
        putchar(d);
        for(; s[i]; i++)
            putchar(s[i]);
        putchar('\n');
    }
    
return 0;
}
