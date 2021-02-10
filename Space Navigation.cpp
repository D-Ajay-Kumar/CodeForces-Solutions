// https://codeforces.com/problemset/problem/1481/A

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll x, y;
    cin >> x >> y;

    string s;
    cin >> s;

    bool flagx = false, flagy = false;

    ll r=0, l=0, u=0, d=0;
    for(char c: s)
    {
        if(c == 'R')
        {
            r+=1;
        }
        else if(c == 'L')
        {
            l+=1;
        }
        else if(c == 'U')
        {
            u+=1;
        }
        else
        {
            d+=1;
        }
    }

    if(x>=0)
    {
        if(r>=x)
        {
            flagx = true;
        }
    }
    else
    {
        if(l >= -x)
        {
            flagx = true;
        }
    }

    if(y>=0)
    {
        if(u>=y)
        {
            flagy = true;
        }
    }
    else
    {
        if(d >= -y)
        {
            flagy = true;
        }
    }

    if(flagx && flagy)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    ll test;
    cin >> test;

    while(test--)
    {
        solve();
    }
}
