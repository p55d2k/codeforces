#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    if (m >= n && k >= n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}