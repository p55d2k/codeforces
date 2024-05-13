#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    int total_sum = 0;
    vector<int> grow(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> grow[i];
        total_sum += grow[i];
    }

    if (total_sum < k)
    {
        cout << -1 << endl;
        return 0;
    }

    sort(grow.begin(), grow.end(), greater<int>());

    int grew = 0;
    int months = 0;
    while (grew < k)
    {
        grew += grow.front();
        grow.erase(grow.begin());
        months++;
    }

    cout << months << endl;

    return 0;
}