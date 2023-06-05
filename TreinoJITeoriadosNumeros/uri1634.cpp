#include <bits/stdc++.h>
using namespace std;

#define N 11234
#define M 31

int p[N][M];

int n, m;



int calcula_soma_coluna(int coluna)
{
    int soma = 0;
    for(int i = 0; i < n; i++)
        soma =  soma + p[i][coluna];
    return soma;
        
}

int gcd(int a, int b)
{
    if(a ==0 )
        return b;
    return gcd(b % a, a);
}



int main(void)
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);


    cin >> n >> m;
    //Controi a matriz
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> p[i][j];

    }

            
    
    
    for(int i = 0; i < n; i++)
    {
        int sim = gcd(p[i][m -1], calcula_soma_coluna(m - 1));
        if(sim == 1)
            cout << p[i][m - 1] << " / " << calcula_soma_coluna(m - 1) << endl;
        else
            cout << p[i][m - 1] / sim  << " / " << calcula_soma_coluna(m - 1)/ sim << endl;
    }

   
    return 0;

}