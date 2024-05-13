#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> stones(n), prefix(n), sortedstones(n), sortedprefix(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> stones[i];
        prefix[i] = stones[i] + (i > 0 ? prefix[i - 1] : 0);
        sortedstones[i] = stones[i];
    }

    sort(sortedstones.begin(), sortedstones.end());
    for (ll i = 0; i < n; i++)
        sortedprefix[i] = sortedstones[i] + (i > 0 ? sortedprefix[i - 1] : 0);

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++)
    {
        ll type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;

        if (type == 1)
            cout << prefix[r] - (l > 0 ? prefix[l - 1] : 0) << endl;
        else
            cout << sortedprefix[r] - (l > 0 ? sortedprefix[l - 1] : 0) << endl;
    }

    return 0;
}