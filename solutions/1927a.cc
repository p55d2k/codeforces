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

        string wall;
        cin >> wall;

        int firstblack = -1, lastblack = -1;

        for (int i = 0; i < l; i++)
        {
            if (firstblack == -1 && wall[i] == 'B')
                firstblack = i;

            if (wall[i] == 'B')
                lastblack = i;
        }

        cout << lastblack - firstblack + 1 << endl;
    }

    return 0;
}