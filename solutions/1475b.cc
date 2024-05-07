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
        int n;
        cin >> n;

        if (n < 2020)
            cout << "NO" << endl;
        else
        {
            // works as n < 2020 squared
            if (n % 2020 <= n / 2020)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}