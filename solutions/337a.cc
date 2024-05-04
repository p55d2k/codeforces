#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // i is a
    // i+n-1 is b

    int n, m;
    cin >> n >> m;

    vector<int> f(m);
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }

    sort(f.begin(), f.end());

    int min = 1001;
    for (int i = 0; i + n - 1 < m; i++)
    {
        if ((f[i + n - 1] - f[i]) < min)
            min = f[i + n - 1] - f[i];
    }

    cout << min << endl;

    return 0;
}