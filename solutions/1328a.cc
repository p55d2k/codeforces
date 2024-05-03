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

        if (b - (a % b) == b)
            cout << 0 << endl;
        else
            cout << b - (a % b) << endl;
    }

    return 0;
}