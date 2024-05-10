#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    char cur = 'a';
    int rot = 0;
    for (int i = 0; i < s.size(); i++)
    {
        rot += abs(cur - s[i]) > 26 - abs(cur - s[i]) ? 26 - abs(cur - s[i]) : abs(cur - s[i]);
        cur = s[i];
    }

    cout << rot << endl;

    return 0;
}