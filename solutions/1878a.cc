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
        int n, k;
        cin >> n >> k;

        bool found = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a == k)
                found = true;
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}