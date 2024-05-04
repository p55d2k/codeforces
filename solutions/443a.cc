#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    set<char> chars;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == ',')
            continue;
        chars.insert(s[i]);
    }

    cout << chars.size() << endl;

    return 0;
}