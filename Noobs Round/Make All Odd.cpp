#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    bool possible = false;
    ll odd_count = 0;
    ll n;
    cin >> n;

    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2 != 0)
        {
            possible = true;
            odd_count += 1;
        }
    }

    if(possible == false)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << n-odd_count << "\n";
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

    return 0;
}
