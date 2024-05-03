#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    int k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0) // ends in 0
        {
            n /= 10;
        }
        else // doesnt end in 0
        {
            n--;
        }
    }

    cout << n << endl;

    return 0;
}