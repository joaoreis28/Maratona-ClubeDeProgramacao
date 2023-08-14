#include <bits/stdc++.h>
using namespace std;

#define MAX 1123456
set<string> dic;
char str[MAX];

int main(void)
{
    int c, i = 0;
    while(1)
    {
        c = getchar();
        if(c >= 'a' && c <= 'z')
            str[i++] = c;
        else if(c >= 'A' && c <= 'Z')
            str[i++] = c - 'A' + 'a';
        else
        {
            str[i] = 0;
            if(i > 0)
            {
                string s(str);
                dic.insert(s);
            }
            if(c == EOF)
                break;
            i = 0;
        }

    }
    for(auto &s: dic)
    {
        printf("%s\n", s.c_str());
    }

    return 0;
}