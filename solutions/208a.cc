#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string delimiter = "WUB";

    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != string::npos)
    {
        token = s.substr(0, pos);
        if (token != "")
            cout << token << " ";
        s.erase(0, pos + delimiter.length());
    }

    cout << s << endl;

    return 0;
}