#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int cals = 0;

    for (char i : s)
    {
        if (i - '0' == 1)
            cals += a1;
        else if (i - '0' == 2)
            cals += a2;
        else if (i - '0' == 3)
            cals += a3;
        else if (i - '0' == 4)
            cals += a4;
    }

    cout << cals << endl;

    return 0;
}