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
        int n, a, b;
        cin >> n >> a >> b;

        if (a * 2 < b)
        {
            cout << n * a << endl;
            continue;
        }

        int paid = 0;
        int bought = 0;
        while (bought < n)
        {
            if (bought + 2 <= n)
            {
                paid += b;
                bought += 2;
            }
            else
            {
                paid += a;
                bought++;
            }
        }

        cout << paid << endl;
    }

    return 0;
}