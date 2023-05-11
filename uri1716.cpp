#include <bits/stdc++.h>
using namespace std;

#define MAX 112345
typedef long long ll;

ll x, y;
int p[MAX], pi;

int sieve(int n)
{
    if(n % 2 == 0)
        return 2;
    p[0] = 2; pi = 1;
    for(int i = 3;; i++ )
    {
        int r = sqrt(i); int prime = 1;
        for(int j = 0; p[j] <= r && prime && j < pi; j++)
            prime &= i % p[j] != 0;
        if(prime)
        {
            p[pi++] = i;
            if(n % i == 0)
                return i;
        }
            

    }
}

ll euclid(ll a, ll b)
{
    if (b == 0) {x = 1; y = 0; return a;}
    ll d = euclid(b, a % b);
    ll _x = x;  
    x = y;
    y = _x - y  * (a / b);
    return d;
}

ll expbin(ll a, ll b, ll n)
{
    if (b == 0)
        return 1;
    if(b & 1)
        return(a * expbin(a, b - 1, n)) % n;
    ll c = expbin(a, b/2, n);
    return (c * c) % n;
}

int main(void)
{
    ll n, e, c;
    scanf("%lld %lld %lld", &n, &e, &c);
    ll p = sieve(n), q = n / p, phi = (p -1) * (q - 1);
    euclid(e, phi);
    ll d = ((x % phi) + phi) % phi;
    printf("%lld\n", expbin(c, d, n));

    return 0;
}