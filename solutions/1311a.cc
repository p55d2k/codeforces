#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a % 2 == 0 && b % 2 == 0 & a > b)
            cout << 1 << endl;
        else if (a % 2 == 1 && b % 2 == 0 & a > b)
            cout << 2 << endl;
        else if (a % 2 == 0 && b % 2 == 1 & a > b)
            cout << 2 << endl;
        else if (a % 2 == 1 && b % 2 == 1 & a > b)
            cout << 1 << endl;
        else if (a % 2 == 0 && b % 2 == 0 & b > a)
            cout << 2 << endl;
        else if (a % 2 == 1 && b % 2 == 0 & b > a)
            cout << 1 << endl;
        else if (a % 2 == 0 && b % 2 == 1 & b > a)
            cout << 1 << endl;
        else if (a % 2 == 1 && b % 2 == 1 & b > a)
            cout << 2 << endl;
        else if (a == b)
            cout << 0 << endl;
    }

    return 0;
}