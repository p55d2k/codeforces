// note: i messed up the definitions of a, b, x and y so i edited the cin call.

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll x, y, a, b;
        cin >> a >> b >> x >> y;

        y = min(y, 2 * x);

        ll smaller = a < b ? a : b;
        ll larger = a > b ? a : b;
        ll cost = smaller * y;
        larger -= smaller;
        cost += larger * x;
        cout << cost << endl;
    }

    return 0;
}