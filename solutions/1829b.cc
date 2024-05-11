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
        int n;
        cin >> n;

        int maxl = -1;
        int l = 0;
        int prev = 1;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a == 0 && prev == 0)
                l++;
            else if (a == 1)
                l = 0;
            else
                l = 1;

            maxl = max(maxl, l);

            prev = a;
        }

        cout << maxl << endl;
    }

    return 0;
}