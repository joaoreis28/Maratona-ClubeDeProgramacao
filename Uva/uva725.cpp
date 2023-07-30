#include <bits/stdc++.h>
using namespace std;


int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;
    for (int fghij = 1234; fghij <= 98765/ N; fghij++)
    {
        int abcde = fghij * N;
        int tmp;
        int used = (fghij > 0);

        tmp = abcde;
        while(tmp) // bit manipulation to determine digit uniqueness
        {
            used |= 1 << (tmp % 10);
            tmp /= 10;
        }

        tmp = fghij;
        while(tmp)
        {
            used |= 1 << (tmp % 10);
            tmp /= 10;
        }
        
        if(used == (1 << 10) - 1)
            printf("%d / %d = %d\n", abcde, fghij, N);
    }
    return 0;
}