#include <iostream>
#include <vector>
using namespace std;

#define ll long long

ll powers2(ll n)
{
    ll sum = 0;
    ll cur = 1;
    
    while (cur <= n)
    {
        sum += cur;
        cur *= 2;
    }

    return 2*sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int inputs;
    cin >> inputs;

    for (int i = 0; i < inputs; i++)
    {
        ll out = 0;
        ll in;
        cin >> in;

        out = in * (in + 1) / 2;
        out -= powers2(in);

        cout << out << "\n";
    }

    return 0;
}