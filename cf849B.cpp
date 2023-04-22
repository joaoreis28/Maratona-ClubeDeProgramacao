#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    int candy = 0;
    int pos[2] = {0, 0};
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        candy = 0;
        pos[0] = 0;
        pos[1] = 0;
        string s;
        cin >> s;
        
        for(int i = 0; i < n; i++)
        {
            



            if(s[i] == 'U')
                pos[1] = pos[1] + 1;
            if(s[i] == 'L')
                pos[0] = pos[0] - 1;
            if(s[i] == 'R')
                pos[0] = pos[0] + 1;
            if(s[i] == 'D')
                pos[1] = pos[1] - 1;



            if(pos[0] == 1 && pos[1] == 1)
                candy = 1;
        }
        if(candy)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    





    return 0;
}