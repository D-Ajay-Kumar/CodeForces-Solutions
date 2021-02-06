#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for(int j=0; j<n; j++)
    {
        arr[j] = 0;
    }

    int num;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        arr[num-1] += 1;
    }

    int colors = *max_element(arr, arr+n);

    cout << colors << "\n";
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
