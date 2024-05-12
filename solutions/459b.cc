#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    map<ll, ll> flowers;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        flowers[x]++;
    }

    ll diff = (--flowers.end())->first - flowers.begin()->first;

    ll ways;

    if (diff == 0)
        ways = n *
               (n - 1) / 2;
    else
        ways = (--flowers.end())->second * flowers.begin()->second;

    cout << diff << " " << ways << endl;

    return 0;
}