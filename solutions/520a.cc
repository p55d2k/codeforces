#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> sv;

    for (int i = 0; i < s.size(); i++)
    {
        sv.insert(tolower(s[i]));
    }

    for (int d = 97; d < 123; d++)
    {
        if (find(sv.begin(), sv.end(), d) == sv.end())
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}