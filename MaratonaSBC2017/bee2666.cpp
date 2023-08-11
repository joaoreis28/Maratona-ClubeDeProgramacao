#include <bits/stdc++.h>
using namespace std;

#define MAX 11234

int imposto[MAX];

vector< vector<int>> ladj;

int main()
{
    int n, c, a;

    scanf("%d %d", &n, &c);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        imposto[i] = a;
    }

    int s, f, p;
    for(int i = 0; i< n-1; i++)
    {
        scanf("%d %d %d", &s, &f, &p);
        ladj[s][i] = f; 
    }
        
        

    return 0;
}
