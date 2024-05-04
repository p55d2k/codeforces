#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    cin >> a >> b >> c;

    string d = a + b;

    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    if (c != d)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}