#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll sum = 0;

    if (n % 2 == 1)
        sum = floor(n / 2) - n;
    else
        sum = n / 2;

    cout << sum << endl;

    return 0;
}