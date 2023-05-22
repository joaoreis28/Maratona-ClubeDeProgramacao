#include <bits/stdc++.h>
using namespace std;

#define MAX 27
#define P 1000000007

typedef long long ll;

ll a [MAX][MAX], b [MAX][MAX];

int valid(int u)
{
    int u0 = u % 3, u1 = (u / 3) % 3, u2 = u / 9;
    return u0 != u1 && u1 != u2; 
}


int adjacent(int u, int v)
{
    int u0 = u % 3, u1 = (u / 3) % 3, u2 = u / 9;
    int v0 = v % 3, v1 = (v / 3) % 3, v2 = v / 9;
    return u0 != v0 && u1 != v1 && u2 != v2;


}


void fill_a(void)
{
    int u, v;
    for(u = 0; u < MAX; u++)
    {
        a[u][u] = 0;
        for(v = u + 1; v < MAX; v++)
        {
            a[u][v] = a[v][u] = (valid(u) && valid(v) && adjacent(u, v));
        }
    }
}

void mult_mat(ll x[][MAX], ll y[][MAX], ll xy[][MAX])
{
    int i, j, k;

     for(i = 0; i < MAX; i++)
        {
            for(j = 0; j < MAX; j++)
            {
                xy[i][j] = 0;
                for(k = 0; k < MAX; k++)
                {
                    xy[i][j] += x[i][k] * y[k][j];
                    xy[i][j] %= P;
                }
            }
        }

}

void expbin(ll x[][MAX], ll n, ll ans[][MAX])
{
    int i, j;
    ll aux [MAX][MAX];
    if(n == 0)
    {
        for(i = 0; i < MAX; i++)
        {
            for(j = 0; j < MAX; j++)
            {
                ans[i][j] = i == j && valid(i);
            }
        }

    }
    else if(n & 1)
    {
        expbin(x, n - 1, aux);
        mult_mat(x, aux, ans);
    }
    else
    {
        expbin(x, n / 2, aux);
        mult_mat(aux, aux, ans);
    }

}

int main(void)
{
    ll n, ans = 0;
    fill_a();
    scanf("%lld", &n);   
    expbin(a, n-1, b);
    for (int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            ans += b[i][j];
            ans %= P;
        }
    }
    printf("%lld", ans);

    return 0;
}