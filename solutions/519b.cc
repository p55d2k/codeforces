#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int t;

    ll original = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        original += t;
    }

    ll edited1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        edited1 += t;
    }

    ll edited2 = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> t;
        edited2 += t;
    }

    cout << original - edited1 << endl
         << edited1 - edited2 << endl;

    return 0;
}