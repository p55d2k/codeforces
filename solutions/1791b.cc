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

        int xpos = 0, ypos = 0;
        bool reached = false;

        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'L')
                xpos--;
            else if (s[i] == 'R')
                xpos++;
            else if (s[i] == 'U')
                ypos++;
            else
                ypos--;

            if (xpos == 1 && ypos == 1)
                reached = true;
        }

        if (reached)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}