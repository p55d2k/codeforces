#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string news;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 && s[i] == '9')
        {
            news += s[i];
            continue;
        }

        int digit = s[i] - '0';
        if (digit > 4)
            news += to_string(9 - digit);
        else
            news += to_string(digit);
    }

    cout << news << endl;

    return 0;
}