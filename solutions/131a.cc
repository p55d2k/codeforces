#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool change_case = true;

    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            change_case = false;
            break;
        }
    }

    if (change_case)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
                s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}