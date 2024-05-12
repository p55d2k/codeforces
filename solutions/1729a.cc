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

        int timefora = a - 1;
        int timeforb = abs(b - c) + c - 1;

        if (timeforb < timefora)
            cout << 2 << endl;
        else if (timefora < timeforb)
            cout << 1 << endl;
        else
            cout << 3 << endl;
    }

    return 0;
}