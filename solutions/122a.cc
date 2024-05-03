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

    bool is_lucky = true;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
            continue;

        is_lucky = false;
    }

    if (is_lucky)
    {
        cout << "YES" << endl;
        return 0;
    }

    if (n_ll % 4 == 0 ||
        n_ll % 7 == 0 ||
        n_ll % 44 == 0 ||
        n_ll % 47 == 0 ||
        n_ll % 74 == 0 ||
        n_ll % 77 == 0 ||
        n_ll % 444 == 0 ||
        n_ll % 447 == 0 ||
        n_ll % 474 == 0 ||
        n_ll % 477 == 0 ||
        n_ll % 744 == 0 ||
        n_ll % 747 == 0 ||
        n_ll % 774 == 0 ||
        n_ll % 777 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}