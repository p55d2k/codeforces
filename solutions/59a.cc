#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int upper_chars = 0;

    for (char i : s)
    {
        if (isupper(i))
            upper_chars++;
    }

    if (upper_chars > (int)s.size() / 2)
    {
        for (char& c : s)
        {
            c = toupper(c);
        }
        cout << s << endl;
    } else
    {
        for (char& c : s)
        {
            c = tolower(c);
        }
        cout << s << endl;
    }

    return 0;
}