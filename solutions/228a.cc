#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll temp;
    int buy = 0;
    vector<ll> colors;

    for (int i = 0; i < 4; i++)
    {
        cin >> temp;

        // alr inside -> buy new
        if (find(colors.begin(), colors.end(), temp) != colors.end())
            buy++;
        else
            colors.push_back(temp);
    }

    cout << buy << endl;

    return 0;
}