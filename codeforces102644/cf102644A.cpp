#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    float p;
    cin >> n >> p;
    float prob = 1.0;
    while(n > 0)
    {
        if(n % 2 == 1)
            prob = prob * (1.0 - p) + (1.0 - prob) * p;
        p  = p * (1 - p) + (1 - p) * p;
        n /= 2;

    }
    cout << prob << endl;
    return 0;
}