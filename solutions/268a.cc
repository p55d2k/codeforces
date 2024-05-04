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

    vector<int> h(n), a(n);

    int t = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];

        if (find(h.begin(), h.end(), a[i]) != h.end())
        {
            if (count(h.begin(), h.end(), a[i]) >= 1)
                t += count(h.begin(), h.end(), a[i]);
        }

        if (find(a.begin(), a.end(), h[i]) != a.end())
        {
            if (count(a.begin(), a.end(), h[i]) >= 1)
                t += count(a.begin(), a.end(), h[i]);
        }
    }

    cout << t << endl;

    return 0;
}