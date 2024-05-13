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
        ll a, b, n;
        cin >> a >> b >> n;

        int ops = 0;
        while (a <= n && b <= n)
        {
            if (a > b)
                b += a;
            else
                a += b;
            ops++;
        }

        cout << ops << endl;
    }

    return 0;
}