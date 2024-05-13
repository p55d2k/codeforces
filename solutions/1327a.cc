#include <bits/stdc++.h>
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
        ll n, k;
        cin >> n >> k;

        if (k % 2 == n % 2 && k * k <= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}