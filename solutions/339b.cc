#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    ll cur_house = 1;
    ll time = 0;

    // (3-1)+((4-3)+(2-1)+1)+(3-2)

    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;

        if (a >= cur_house)
            time += a - cur_house;
        else
            time += n - cur_house + a;

        cur_house = a;
    }

    cout << time << endl;

    return 0;
}