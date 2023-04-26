#include <bits/stdc++.h>
using namespace std;

#define MAX 112

int memo[MAX][60][60][60], n, k, d[MAX];

int  dp(int i, int c1, int c2, int c3)
{
    int ch1 = 0, ch2 = 0, ch3 = 0, ch4 = 0;
    if(i == n)
        return 0;
    if(memo[i][c1][c2][c3] =! -1)
        return memo[i][c1][c2][c3];
    ch1 = dp(i + 1, c1, c2, c3 );
    if (d[i] <= c1)
        ch2 = dp(i + 1, c1 - d[i], c2, c3) + d[i];
    if (d[i] <= c2)
        ch3 = dp(i + 1, c1 , c2 - d[i], c3) + d[i];
    if (d[i] <= c3)
        ch4 = dp(i + 1, c1 , c2, c3 - d[i]) + d[i];

      
    return memo[i][c1][c2][c3] = max (ch1, max(ch2, max(ch3, ch4)));
}


int main(void)
{

    int i , c[] = {0, 0, 0};
    cin >> n;
    cin >> k;
    for(i = 0; i < n; i++)
        scanf("%d  %d %d", &c[0],  &c[1], &c[2]);
    memset(memo, -1, sizeof(memo));
    printf("%d\n", dp(0, c[0], c[1], c[2]));
    
    

    return 0;
}