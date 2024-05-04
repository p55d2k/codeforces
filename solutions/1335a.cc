#include <iostream>
#include <iomanip>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    cout << fixed;

    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n;
        cout << (n - 1) / 2 << endl;
    }

    return 0;
}