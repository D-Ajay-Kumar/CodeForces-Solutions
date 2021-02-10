// https://codeforces.com/problemset/problem/1481/B

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n , boulders;
    cin >> n >> boulders;

    ll h[n];
    for(int i=0; i<n; i++)
    {
        cin >> h[i];
    }

    int pos;

    // b is the index of the boulder that is thrown
    // m is the position of the current boulder on the mountains
    for(ll b=0, m=0; b<boulders;)
    {
        if(m == n-1)
        {
            pos = -1;
            break; // coz if 1 boulder goes to garbage collection then the remaining too will go down the garbage collection
        }
        else if(h[m] < h[m+1])
        {
            h[m] += 1;
            pos = m+1;
            b += 1;
            m = 0;
            continue;
        }
        else
        {
            m += 1;
            continue;
        }
    }


    cout << pos << "\n";
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
