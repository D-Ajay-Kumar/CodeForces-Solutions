#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n, k, teams = 0;
    cin >> n >> k;

    ll skills[n];
    for(ll k=0; k<n; k++)
    {
        cin >> skills[k];
    }

    sort(skills, skills+n, greater<ll>());

    for(ll i=0, j=n-1; i<=j;)
    {
        if(skills[i] >= k)
        {
            teams += 1;
            i += 1;
            continue;
        }
        else if( (skills[i]+skills[j] >= k) && i!=j)
        {
            teams += 1;
            i += 1;
            j += -1;
            continue;
        }
        else
        {
            j += -1;
        }
    }

    cout << teams << "\n";
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
