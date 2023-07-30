#include <bits/stdc++.h>
using namespace std;


void TestCase()
{
    int n;
    string s;
    char mask;
    cin >> n;
    cin >> s;
    
    set<char> final;
    vector<int> suff(n);
    for(int i = n -1; i >= 0; i--)
    {
        final.insert(s[i]);
        suff[i] = final.size();
    }
    set<char> comeco;
    int resp = 0;
    for(int i = 0; i < n - 1; i++)
    {
        comeco.insert(s[i]);
        resp = max(resp,(int)comeco.size() + suff[i + 1] );
    }
    cout << resp << endl;


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