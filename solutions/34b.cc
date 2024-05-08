#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> tvs;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a < 0)
            tvs.push_back(a);
    }

    sort(tvs.begin(), tvs.end());
    int sum = 0;

    for (int i = 0; i < tvs.size(); i++)
    {
        sum += abs(tvs[i]);
        if (i == m - 1)
            break;
    }

    cout << sum << endl;

    return 0;
}