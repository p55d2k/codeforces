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
        int a, b;
        cin >> a >> b;

        int side = -1;

        // b is always larger than a
        if (a > b)
            swap(a, b);

        if (a * 2 < b)
            side = b;
        else
            side = 2 * a;

        cout << side * side << endl;
    }

    return 0;
}