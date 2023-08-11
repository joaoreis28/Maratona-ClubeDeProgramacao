#include <bits/stdc++.h>
using namespace std;
// uri e beecwoed eh a mesma coisa
#define MAX 112345

int n, nei[MAX], vis[MAX];
map <string, int> s2u;

int dfs(int u, int l)
{
    if(vis[u]) return vis[u] == l;
    vis[u] = l;
    return dfs(nei[u], l);
}


int main()
{
    int u, v, ans = 0;
    char str1[20], str2[20];
    n = 0;
    while(scanf("%s %s", str1, str2) != EOF)
    {
        string s1(str1), s2(str2);
        u = s2u.find(s1) == s2u.end() ? (s2u[s1] = n++) : s2u[s1]; 
        v = s2u.find(s2) == s2u.end() ? (s2u[s2] = n++) : s2u[s2];
        nei[u]  = v; 
    }
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++) ans += dfs(i, i + 1);
    printf("%d\n", ans);

    cout << u <<endl;
    cout << v << endl;
    return 0;
}