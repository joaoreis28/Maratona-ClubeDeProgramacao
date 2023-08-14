#include <bits/stdc++.h>
using namespace std;

int som[4123];

int main()
{
    int n, m;
    char* nota;
    scanf("%d %d", &n, &m);
    for(int i = 0;i < n; i++)
    {
        scanf("%s", nota);
        if(nota == "A")
            som[i] = 1;
        else    
            som[i] = 0;
    }

    for (int i =0; i< n; i++)
    {
        printf("%d\n", som[i]);
    }
    return 0;
}