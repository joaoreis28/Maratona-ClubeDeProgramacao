#include <stdio.h>

int main(void)
{
    int t, a, b, c;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        (a + b == c ? printf("+\n") : printf("-\n") );
    }
    




    return 0;
}