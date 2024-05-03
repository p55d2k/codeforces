#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    if (k <= (n + 1) / 2) // odd - first half
        cout << 2 * k - 1 << endl; // can calculate directly the kth odd number
    else // even
        cout << 2 * (k - (n + 1) / 2) << endl;

    return 0;
}