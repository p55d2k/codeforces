#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);
        ll leasta = 2e9, leastb = 2e9;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < leasta)
                leasta = a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < leastb)
                leastb = b[i];
        }

        ll moves = 0;

        for (ll i = 0; i < n; i++)
        {
            ll diffa = a[i] - leasta;
            ll diffb = b[i] - leastb;
            moves += max(diffa, diffb);
            // cout << a[i] << " is a[i], " << leasta << " is leasta, " << b[i] << " is b[i], " << leastb << "is leastb, " << diffa << " is diffa, " << diffb << " is diffb, and " << moves << " is cur amt of moves." << endl;
        }

        cout << moves << endl;
    }

    return 0;
}