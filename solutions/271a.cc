#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int y;
    cin >> y;

    while (1)
    {
        y++;
        string s = to_string(y);

        set<char> S, Sd;
        string reduced;

        for (char c : s)
        {
            if (S.insert(c).second)
                reduced += c;
        }

        if (reduced == s)
        {
            cout << s << endl;
            return 0;
        }
    }

    return 0;
}