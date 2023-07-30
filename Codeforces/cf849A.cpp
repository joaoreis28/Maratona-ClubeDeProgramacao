#include <bits/stdc++.h>
using namespace std;

void Testa()
{
    string s = "codeforces";
    char c;
    cin >> c;
    for(auto l : s)
    {
        if(l == c)
        {
            printf("YES\n");
            return;
        }
        
            
    }
    printf("NO\n");
}



int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        Testa();
        
    }
    

    



    return 0;
}