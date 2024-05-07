#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n > 0)
        cout << n << endl;
    else
    {
        if (n >= -10)
        {
            cout << 0 << endl;
            return 0;
        }

        string s = to_string(n);
        string s1last = s.substr(0, s.size() - 1);
        string s2last = s.substr(0, s.size() - 2) + s[s.size() - 1];

        int o = stoi(s1last);
        int t = stoi(s2last);

        if (o > t)
            cout << o << endl;
        else
            cout << t << endl;
    }

    return 0;
}