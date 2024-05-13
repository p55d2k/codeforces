#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    cin >> l;

    string s;
    cin >> s;

    int amount0 = 0, amount1 = 0;

    for (int i = 0; i < l; i++)
    {
        if (s[i] == '0')
            amount0++;
        else
            amount1++;
    }

    cout << abs(amount0 - amount1) << endl;

    return 0;
}