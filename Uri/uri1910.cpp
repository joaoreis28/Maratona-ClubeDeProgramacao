#include <bits/stdc++.h>
using namespace std;

#define MAX 112345
int forbiden[MAX], dist[MAX];
queue<int> q;



int bfs(int u, int v)
{
    dist[u] = 0; q.push(u);
    while(!q.empty())
    {
        if(dist[v] != -1) return dist[v];
        int p = q.front();q.pop();
        if((!forbiden[p -1] && p-1 > 0) && dist[p -1] == -1)
        {
            dist[p - 1] = dist[p] + 1;
            q.push(p - 1);
        }

        if((!forbiden[p + 1] && p + 1 <= 100000) && dist[p + 1] == -1)
        {
            dist[p + 1] = dist[p] + 1;
            q.push(p + 1);
        }

        if((!forbiden[p/ 2] && p % 2 == 0) && dist[p /2] == -1)
        {
            dist[p/2] = dist[p] + 1;
            q.push(p/2);
        }

        if((!forbiden[p*2] && p*2 <= 100000) && dist[p*2] == -1)
        {
            dist[p*2] = dist[p] + 1;
            q.push(p*2);
        }
        
        if(p*3 <= 100000 && !forbiden[p*3] && dist[p*3] == -1)
        {
            dist[p*3] = dist[p] + 1;
            q.push(p*3);
        }
    }
    return -1;
}

int main()
{
    int o , d,k, l;
    while(scanf("%d %d %d", &o, &d, &k), o |d | k)
    {
        memset(forbiden, 0, sizeof(forbiden));
        memset(dist, -1, sizeof(dist));
        for(int i =0; i < k; i++)
        {
            scanf("%d", &l);
            forbiden[l] = 1;
        }

        cout << bfs(o, d) << endl;
    }

    return 0;
}