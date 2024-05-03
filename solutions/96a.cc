#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int size = s.size();

    if (size < 7)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (i == size - 6)
        {
            cout << "NO" << endl;
            return 0;
        }

        if (s[i] == s[i + 1] &&
            s[i + 1] == s[i + 2] &&
            s[i + 2] == s[i + 3] &&
            s[i + 3] == s[i + 4] &&
            s[i + 4] == s[i + 5] &&
            s[i + 5] == s[i + 6])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    return 0;
}