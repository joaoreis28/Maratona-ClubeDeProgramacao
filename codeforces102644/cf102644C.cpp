#include <bits/stdc++.h>
using namespace std;

#define P 1000000007


typedef long long ll;

ll A[2][2] = {{0,1}, {1, 1}};
ll B[2][2];
ll C[2] = {0, 1};
ll D[2];

void mult_mat(ll x[][2], ll y[][2], ll xy[][2])
{
    int i, j, k;

     for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                xy[i][j] = 0;
                for(k = 0; k < 2; k++)
                {
                    xy[i][j] += x[i][k] * y[k][j];
                    xy[i][j] %= P;
                }
            }
        }

}

void mult_mato(ll x[][2], ll y[2], ll xy[2])
{
    int i, j, k;

     for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                xy[i] = 0;
                for(k = 0; k < 2; k++)
                {
                    xy[i] += x[i][k] * y[k];
                    xy[i] %= P;
                }
            }
        }

}

void expbin(ll x[][2], ll n, ll ans[][2])
{
    int i, j;
    ll aux [2][2];
    if(n == 0)
    {
        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 2; j++)
            {
                ans[i][j] = i == j;
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



ll Fibonacci(ll n)
{
    if(n <= 1)
        return n;
    expbin(A, n -1, B);
    mult_mato(B,C, D);
    return D[1];

}

int main(void)
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    cout << Fibonacci(n);


    
    return 0;
}