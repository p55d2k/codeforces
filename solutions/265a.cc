#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string t;
    cin >> t;

    int cur = 0;

    for (int i = 0; i < t.size(); i++)
    {
        if (s[cur] == t[i])
            cur++;
    }

    cout << cur + 1 << endl;

    return 0;
}