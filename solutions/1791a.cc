#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char s;
        cin >> s;

        if (s == 99 ||
            s == 100 ||
            s == 101 ||
            s == 102 ||
            s == 111 ||
            s == 114 ||
            s == 115)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}