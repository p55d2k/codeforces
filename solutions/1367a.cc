#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        if (s.size() == 2)
        {
            cout << s << endl;
            continue;
        }

        bool first = true;
        string a = "";

        for (int j = 0; j < s.size(); j++)
        {
            if (!first)
                a += s[j - 1];

            if (j == s.size() - 1)
                a += s[j];

            first = !first;
        }

        cout << a << endl;
    }

    return 0;
}