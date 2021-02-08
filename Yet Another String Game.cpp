// https://codeforces.com/contest/1480/problem/A

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        if(i%2 == 0)
        {
            if(s[i] != 'a')
            {
                s[i] = 'a';
                continue;
            }
            if(s[i]=='z')
            {
                s[i] = 'a';
                continue;
            }
            s[i] = (char)((int)s[i]+1);
        }
        else
        {
            if(s[i] != 'z')
            {
                s[i] = 'z';
                continue;
            }
            if(s[i] == 'a')
            {
                s[i] = 'z';
                continue;
            }
            s[i] = (char)((int)s[i]-1);
        }
    }

    cout << s << "\n";
}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        solve();
    }
}
