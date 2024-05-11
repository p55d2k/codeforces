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
        int n;
        cin >> n;

        int l = to_string(n).size();
        int amt = (l - 1) * 9;

        for (int i = 1; i <= 9; ++i)
        {
            ll num = 0;
            for (int j = 0; j < l; ++j)
                num = num * 10 + i;

            if (num <= n)
                amt++;
        }

        cout << amt << endl;
    }

    return 0;
}