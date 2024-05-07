#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "cab" || s == "bca")
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}