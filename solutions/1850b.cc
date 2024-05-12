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

        int bestindex = -1;
        int bestquality = -1;

        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (b > bestquality && a <= 10)
            {
                bestquality = b;
                bestindex = i;
            }
        }

        cout << bestindex << endl;
    }

    return 0;
}