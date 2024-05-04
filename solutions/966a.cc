#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int bills[5] = {100, 20, 10, 5, 1};

    ll n;
    cin >> n;

    ll cur = 0;

    while (n > 0)
    {
        for (int bill : bills)
        {
            if (n >= bill)
            {
                n -= bill;
                cur++;
                break;
            }
        }
    }

    cout << cur << endl;

    return 0;
}