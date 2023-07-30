#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n, x, y, candy;
    string s;

    candy = 0;
    x = 0;
    y = 0;

    cin >> n;
    cin >> s;
    
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U')
            y = y + 1;
        if(s[i] == 'L')
            x -= 1;
        if(s[i] == 'R')
            x += 1;
        if(s[i] == 'D')
            y -= 1;
        if(x == 1 && y == 1)
            candy = 1;
    }
    if(candy)
        printf("YES\n");
    else
        printf("NO\n");
    
}


int main(void)
{
    int t;   
    scanf("%d", &t);
    while (t--)
    {
     TestCase();   
        
    }

    return 0;
}