#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<int> n;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
            n.push_back(s[i] - '0');
    }

    sort(n.begin(), n.end());

    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i];
        if (i != n.size() - 1)
            cout << '+';
    }

    cout << endl;

    return 0;
}