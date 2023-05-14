#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll m;

ll expbin(ll a, ll exp)
{
    if(exp == 0)
        return 1;
    if(exp & 1)
        return (a * expbin(a, exp -1)) % m;
    ll b = expbin(a, exp / 2);
    return (b * b) % m;
}



int main(void)
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    ll b , p;
   while(cin >> b >> p >> m)
   {
    cout << expbin(b, p) << endl;
   }
    
    return 0;
}