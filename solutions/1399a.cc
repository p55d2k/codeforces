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

    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        vector<int> b = a;

        for (int i = 0; i + 1 < n; i++)
        {
            if (abs(a[i] - a[i + 1]) <= 1)
                b.erase(b.begin());
        }

        if (b.size() > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}