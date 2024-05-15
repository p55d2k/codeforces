#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    cin >> n >> x;

    ll remain = x;
    int kids = 0;

    for (int i = 0; i < n; i++)
    {
        char op;
        int amt;
        cin >> op >> amt;

        if (op == '+')
            remain += amt;
        else if (op == '-' && remain >= amt)
            remain -= amt;
        else
            kids++;
    }

    cout << remain << " " << kids << endl;

    return 0;
}