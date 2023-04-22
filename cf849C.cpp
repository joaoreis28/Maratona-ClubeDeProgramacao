#include <bits/stdc++.h>
using namespace std;


void TestCase()
{
    string s;
    int n, cortes;
    cin >> n;
    cin >> s;
    cortes = 0;
    for(int i = 0; i <= n/2; i++)
    {
        if(s[i] == s[n - i -1])
        {
            cout << n - i *2 << endl;
            return;
        }
    }
    cout << 0 << endl;
}



int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        TestCase();
    }

    return 0;
}