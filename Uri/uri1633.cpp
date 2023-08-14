#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef long long ll;
#define MAX 112345

ii proc[MAX];
int n;
int main()
{
    while(scanf("%d", &n) != EOF)
    {
        priority_queue< ii, vector<ii>, greater<ii> > q;
        int i, t=1; ll ans;
        for(i = 0; i < n; i++)
            scanf("%d %d", &proc[i].first , &proc[i].second);
        sort(proc, proc + n);
        i =0;
        while(i < n || !q.empty())
        {
            while(i < n && proc[i].first <= t)
            {
                q.push(ii(proc[i].second, proc[i].first));
                i++;
            }
            if(!q.empty())
            {
                ans += t - q.top().second;
                t += q.top().first;
                q.pop();
            }
            else if(i < n)
            {
                t = proc[i].first;
            }
                
        }
        printf("%lld\n", ans);
    }
    return 0;
}