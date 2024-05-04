#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l;
    cin >> n >> l;

    vector<int> lamps(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lamps[i];
    }

    sort(lamps.begin(), lamps.end());

    double maxd = max(lamps.front(), l - lamps.back());

    for (int i = 0; i < n - 1; i++)
    {
        maxd = max(maxd, (lamps[i + 1] - lamps[i]) / 2.0);
    }

    cout.precision(10);
    cout << fixed << maxd << endl;

    return 0;
}