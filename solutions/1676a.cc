#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int _ = 0; _ < t; _++)
    {
        string s;
        cin >> s;

        vector<int> digits;
        for (int i = 0; i < 6; i++)
        {
            digits.push_back(s[i] - '0');
        }

        if (digits[0] + digits[1] + digits[2] == digits[3] + digits[4] + digits[5])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}