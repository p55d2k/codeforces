#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string rows = "abcdefgh";
    string cols = "12345678";

    while (t--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < 8; i++)
        {
            if (s[0] != rows[i])
                cout << rows[i] << s[1] << endl;
        }

        for (int i = 0; i < 8; i++)
        {
            if (s[1] != cols[i])
                cout << s[0] << cols[i] << endl;
        }
    }

    return 0;
}