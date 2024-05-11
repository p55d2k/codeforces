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
        int w, h, n;
        cin >> w >> h >> n;

        long long pieces = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            pieces *= 2;
        }

        while (h % 2 == 0)
        {
            h /= 2;
            pieces *= 2;
        }

        if (pieces >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}