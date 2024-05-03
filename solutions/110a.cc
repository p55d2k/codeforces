#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n_ll;
    cin >> n_ll;
    string n = to_string(n_ll);

    int lucky_digits = 0;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            lucky_digits++;
        }
    }

    string lucky_digits_str = to_string(lucky_digits);

    for (int i = 0; i < lucky_digits_str.size(); i++)
    {
        if (lucky_digits_str[i] == '4' || lucky_digits_str[i] == '7')
            continue;

        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    return 0;
}