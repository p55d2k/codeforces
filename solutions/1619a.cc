#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s.size() % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (s.substr(0, s.size() / 2) == s.substr(s.size() / 2, s.size() - 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}