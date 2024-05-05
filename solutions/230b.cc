#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

bool is_prime(ll n)
{
    if (n < 2)
        return false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;

        ll root = sqrt(t);

        if (root * root == t && is_prime(root))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}