#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int diff = abs(a - b) - 1;
        int size = 2 * diff + 2;

        if (c > size || a > size || b > size)
        {
            cout << -1 << endl;
            continue;
        }

        int ans = c + diff;
        if (ans >= size)
            ans -= size;
        cout << ans + 1 << endl;
    }

    return 0;
}