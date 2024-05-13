#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

bool is_perfect_square(ll n)
{
    ll root = round(sqrt(n));
    return root * root == n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll sum = 0;
        ll temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            sum += temp;
        }

        if (is_perfect_square(sum))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}