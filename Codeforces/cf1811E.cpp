#include <stdio.h>


typedef  long long ll;


int a [45], asize;

void to_base9(ll k)
{
    asize = 0;
    if(k == 0 )
    {
        a[0] = 0 ;
        asize = 1;
    }
    while (k)
    {
        a[asize++] = k % 9;
        k = k / 9;
    }
    

}

int main(void)
{
    ll k;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &k );
        to_base9(k);
        for(int i = asize - 1; i >= 0; i-- )
            printf("%d", a[i] >= 4 ? a[i] + 1 : a[i]);
        printf("\n");
    }
    



    return 0;
}