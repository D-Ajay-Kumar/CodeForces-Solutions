// https://codeforces.com/problemset/problem/1476/B

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll p[n];
    ll sum = 0;
    double coeff;
    ll cost = 0;

    for(ll i=0; i<n; i++)
    {
        cin >> p[i];

        if(i>0)
        {
            coeff = ( (double)p[i]/sum ) * 100;
            // cout << "p[i] = " << p[i] << "\n";
            // cout << "sum = " << sum << "\n";
            // cout << "coeff = " << coeff << "\n";

            if(coeff > k)
            {
                double x = ceil((( (double)p[i]*100 ) / k) - sum);
                cost += x;
                p[0] += x;
                sum += x;
            }
        }

        sum += p[i];
    }

    cout << cost << "\n";
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
