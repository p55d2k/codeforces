#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }

        char larger = a > b ? 'A' : 'B';
        cout << larger << endl;
    }

    return 0;
}