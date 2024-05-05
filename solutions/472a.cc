#include <iostream>
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

    int cur = 2;
    while (1)
    {
        if (!is_prime(cur) && !is_prime(n - cur))
        {
            cout << cur << " " << n - cur << endl;
            return 0;
        }
        cur++;
    }

    return 0;
}