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

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        double mean = (a + b) / 2.0;
        int larger = a > b ? a : b;

        cout << (int)ceil((larger - mean) * 1.0 / c) << endl;
    }

    return 0;
}
