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
        ll x, y, z;
        cin >> x >> y >> z;

        if (x == y && x >= z)
            cout << "YES" << endl
                 << x << " " << z << " " << z << endl;
        else if (x == z && z >= y)
            cout << "YES" << endl
                 << x << " " << y << " " << y << endl;
        else if (y == z && y >= x)
            cout << "YES" << endl
                 << y << " " << x << " " << x << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
