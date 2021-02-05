#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll temp = 0;
    ll n;
    cin >> n;


    string s;
    cin >> s;

    for(char c: s)
    {
        if(c == '0')
        {
            if(temp == 3)
            {
                temp = 0;
            }
            else
            {
                temp += 1;
            }
        }
        else
        {
            if(temp == -3)
            {
                temp = 0;
            }
            else
            {
                temp += -1;
            }
        }
    }

    char direction;

    if(temp == 1 || temp == -3)
    {
        direction = 'S';
    }
    else if(temp == 2 || temp == -2)
    {
        direction = 'W';
    }
    else if(temp == 3 || temp == -1)
    {
        direction = 'N';
    }
    else
    {
        direction = 'E';
    }

    cout << direction << "\n";
}

int main()
{
    ll test;
    cin >> test;

    while(test--)
    {
        solve();
    }

    return 0;
}
