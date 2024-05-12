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
        string a, b, c;
        cin >> a >> b >> c;

        string unknown;
        if (a.find('?') != string::npos)
            unknown = a;
        else if (b.find('?') != string::npos)
            unknown = b;
        else if (c.find('?') != string::npos)
            unknown = c;

        bool afound = false, bfound = false, cfound = false;
        for (int i = 0; i < 3; i++)
        {
            if (unknown[i] == 'A')
                afound = true;
            else if (unknown[i] == 'B')
                bfound = true;
            else if (unknown[i] == 'C')
                cfound = true;
        }

        if (!afound)
            cout << "A" << endl;
        else if (!bfound)
            cout << "B" << endl;
        else if (!cfound)
            cout << "C" << endl;
    }

    return 0;
}