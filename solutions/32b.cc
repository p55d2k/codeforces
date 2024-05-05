#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string out = "";

    // this works cos i is incremented in the loop, skipping some chars
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            out += "0";
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            out += "1";
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            out += "2";
            i++;
        }
    }

    cout << out << endl;

    return 0;
}