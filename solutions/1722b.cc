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
        int l;
        cin >> l;

        string s;
        cin >> s;

        string modifieds = "";
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'G')
                modifieds += 'B';
            else
                modifieds += s[i];
        }

        string n;
        cin >> n;

        string modifiedn = "";
        for (int i = 0; i < l; i++)
        {
            if (n[i] == 'G')
                modifiedn += 'B';
            else
                modifiedn += n[i];
        }

        if (modifiedn == modifieds)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}