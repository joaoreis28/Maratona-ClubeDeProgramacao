#include <bits/stdc++.h>
using namespace std;

int memo[50];
int p[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};

int dp(int n)
{
    int ans =0;
    if(memo[n] != -1)
        return memo[n];
    if(n == 0)
        ans = 0;
    for(int i = 1; i <=n; i++)
    {
        ans = max(ans, p[i] + dp(n-i) );
    }
    memo[n] = ans;
    return ans;
}



int main(void)
{
    memset(memo, -1, sizeof(memo));
    printf("%d", dp(41));
   return 0;
}