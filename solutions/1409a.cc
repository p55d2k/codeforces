#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    ll a, b;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        if (a > b)
        {
            if ((a - b) % 10 != 0)
                cout << (int)((a - b) / 10.0) + 1 << endl;
            else
                cout << (int)((a - b) / 10.0) << endl;
        }
        else if (b > a)
        {
            if ((b - a) % 10 != 0)
                cout << (int)((b - a) / 10.0) + 1 << endl;
            else
                cout << (int)((b - a) / 10.0) << endl;
        }
    }

    return 0;
}