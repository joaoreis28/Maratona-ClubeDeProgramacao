#include <bits/stdc++.h>
using namespace std;

#define MAX 1123
#define P 100000007

typedef long long ll;

ll expbin(int a, int exp)
{
    if(exp == 0)
        return 1;   
    if(exp & 1)
        return (a * expbin(a, exp-1)) % P;
    ll b = expbin(a, exp / 2);
    return (b *b) % P;
}

int main(void)
{
    ll fact[MAX], a, b;
    int freq[26],  i;
    fact[0] = 1;
    for(i = 1; i < MAX; i++) fact[i] = (fact[i - 1] * i) % P;
    
    char s[MAX];
    int n;
    while( scanf(" %s", s) != EOF )
    {
        n = strlen(s);
        memset(freq, 0, sizeof(freq));
        for(i = 0; i < n; i++) freq[s[i] - 'A']++;       
        a = fact[n];
        b = 1;
        for( i = 0; i < 26; i++) {b *= fact[freq[i]]; b %= P;}
        b = expbin(b, P-2);
        printf("%lld", (a * b) % P);   
    }


    return 0;
}