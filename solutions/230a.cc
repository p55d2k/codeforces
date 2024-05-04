#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> xy;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        xy.push_back(make_pair(x, y));
    }

    sort(xy.begin(), xy.end(), compare);

    for (pair<int, int> &dragon : xy)
    {
        if (s <= dragon.first)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
            s += dragon.second;
    }

    cout << "YES" << endl;

    return 0;
}