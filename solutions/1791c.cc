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

        while (s[0] == '0' && s[s.size() - 1] == '1' ||
               s[0] == '1' && s[s.size() - 1] == '0')
        {
            s = s.substr(1, s.size() - 2);
        }

        cout << s.size() << endl;
    }

    return 0;
}