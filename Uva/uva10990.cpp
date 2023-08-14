#include <bits/stdc++.h>
using namespace std;

#define MAX 2123456

typedef long long ll;

int phi[MAX], dphi[MAX];
ll sum[MAX];

void sieve()
{
    int i;
    for(i = 2; i < MAX; i++) phi[i] = i;
    for(i = 2; i < MAX; i++)
        if(phi[i] == i)
            for(int j= i; j < MAX; j +=i)
                phi[j] -= phi[j]/i;
}
int main(void)
{
    int i, ncases;
    sieve();
    return 0;
    for(dphi[1] = 0, i = 2;i < MAX; i++ )
        dphi[i] = dphi[phi[i]] + 1;
    for(sum[1] = 0, i = 2;i < MAX; i++ )
        sum[i] = sum[i - 1] + dphi[i];

    scanf("%d " ,&ncases);
    while(ncases--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        printf("%lld\n", sum[n]- sum[m - 1]);
    }
    return 0;
    
}