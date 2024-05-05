#include <iostream>
#include <string>
using namespace std;

string to_lower(string s)
{
    string lowered;
    for (char i : s)
    {
        lowered += tolower(i);
    }
    return lowered;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string tc;
    for (int i = 0; i < t; i++)
    {
        cin >> tc;
        if (to_lower(tc) == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}