#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b, c;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b == c || a + c == b || b + c == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}