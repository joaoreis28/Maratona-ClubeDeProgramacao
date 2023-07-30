#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, k, corte, ans = 0;
    
    cin >> n;
    cin >> k;
    vector <int> notas(n + 1);

    for(int i = 0; i < n; i++)
    {
        cin >> notas[i];
    }
    sort(notas.begin(), notas.end(), greater<int>());

    corte = notas[k - 1];

    for(int j = k  ; ; j++)
    {
        if(notas[j] == corte)
            k++;
        else
            break;
    }

    cout << k << endl;

    return 0;
}