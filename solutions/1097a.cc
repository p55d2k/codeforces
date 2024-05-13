#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string card;
    cin >> card;

    bool can = false;
    for (int i = 0; i < 5; i++)
    {
        string cur;
        cin >> cur;

        if (cur[0] == card[0] || cur[1] == card[1])
            can = true;
    }

    if (can)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}