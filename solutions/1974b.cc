// this file is unsubmitted, so it might be wrong

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

        set<char> charset;
        for (int i = 0; i < n; i++)
        {
            charset.insert(s[i]);
        }

        vector<char> charsetvector(charset.begin(), charset.end());

        unordered_map<char, char> to;
        for (int i = 0; i < charsetvector.size(); i++)
        {
            to[charsetvector[i]] = charsetvector[charsetvector.size() - 1 - i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << to[s[i]];
        }

        cout << endl;
    }

    return 0;
}