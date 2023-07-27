#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll expbin(ll a, ll exp)
{
    ll b;

    if(exp == 0)
        return 1;
    if(exp & 1)
        return a * expbin(a, exp - 1);
    b = expbin(a, exp/2);
    return b * b;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll n;
    ll primo_div, primos;
    cin >> n;

    primo_div = 2;
    primos = 0;

    while (primo_div * primo_div <= n)
    {

        if(n % primo_div == 0)
        {
            primos++;
            while(n % primo_div == 0)
                n = n / primo_div;
        }
        primo_div++;
    }

    if(n != 1)
        primos ++;

    
    //cout << expbin(2, primos) - primos - 1 << endl;
    cout << (1l << primos) - primos - 1 << endl;
    return 0;
}