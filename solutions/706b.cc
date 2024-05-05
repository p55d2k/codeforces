#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int q;
    cin >> q;
    int m;

    for (int i = 0; i < q; i++)
    {
        cin >> m;

        int left = 0, right = n - 1, ans = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (x[mid] <= m)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}