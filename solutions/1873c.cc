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
        int pts = 0;

        for (int i = 0; i < 10; i++)
        {
            cin >> s;
            for (int j = 0; j < 10; j++)
            {
                if (s[j] == 'X')
                {
                    if (i == 0 || i == 9 || j == 0 || j == 9)
                        pts++;
                    else if (i == 1 || i == 8 || j == 1 || j == 8)
                        pts += 2;
                    else if (i == 2 || i == 7 || j == 2 || j == 7)
                        pts += 3;
                    else if (i == 3 || i == 6 || j == 3 || j == 6)
                        pts += 4;
                    else
                        pts += 5;
                }
            }
        }

        cout << pts << endl;
    }

    return 0;
}