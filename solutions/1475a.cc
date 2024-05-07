#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int _ = 0; _ < t; _++)
    {
        ll n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        double l = log2(n);
        bool found = floor(l) != ceil(l);

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}