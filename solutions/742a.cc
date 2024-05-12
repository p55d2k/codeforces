#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    // 1->8, 2->4, 3->2, 4->6, 5->8...

    if (n % 4 == 1)
        cout << 8;
    else if (n % 4 == 2)
        cout << 4;
    else if (n % 4 == 3)
        cout << 2;
    else if (n % 4 == 0)
        cout << 6;

    cout << endl;

    return 0;
}