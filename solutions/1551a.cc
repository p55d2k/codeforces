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

    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 3 == 0)
            cout << n / 3 << " " << n / 3 << endl;
        else if (n % 3 == 1)
            cout << (int)(floor(n / 3)) + 1 << " " << (int)(floor(n / 3)) << endl;
        else
            cout << (int)(floor(n / 3)) << " " << (int)(floor(n / 3)) + 1 << endl;
    }

    return 0;
}