#include <iostream>
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
        ll x, y, n;
        cin >> x >> y >> n;

        ll largest = floor(n / x);
        if (largest * x + y > n)
            cout << (largest - 1) * x + y << endl;
        else
            cout << largest * x + y << endl;
    }

    return 0;
}