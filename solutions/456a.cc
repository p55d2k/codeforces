#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<pair<int, int>> laptops(t);

    for (int i = 0; i < t; i++)
    {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops.begin(), laptops.end());

    for (int i = 1; i < t; i++)
    {
        if (laptops[i - 1].second > laptops[i].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }

    cout << "Poor Alex" << endl;

    return 0;
}