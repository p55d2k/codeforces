#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool foundAB = false, foundBA = false;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (!foundAB && s[i] == 'A' && s[i + 1] == 'B')
        {
            foundAB = true;
            ++i;
        }
        else if (foundAB && s[i] == 'B' && s[i + 1] == 'A')
        {
            foundBA = true;
            break;
        }
    }

    if (foundAB && foundBA)
    {
        cout << "YES\n";
        return 0;
    }

    foundAB = foundBA = false;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (!foundBA && s[i] == 'B' && s[i + 1] == 'A')
        {
            foundBA = true;
            ++i;
        }
        else if (foundBA && s[i] == 'A' && s[i + 1] == 'B')
        {
            foundAB = true;
            break;
        }
    }

    cout << (foundAB && foundBA ? "YES\n" : "NO\n");

    return 0;
}