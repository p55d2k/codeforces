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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int largestpos = -1;
        for (int i = 0; i < n; i++)
        {
            int pos = s[i] - 'a';
            largestpos = max(largestpos, pos);
        }

        cout << largestpos + 1 << endl;
    }

    return 0;
}