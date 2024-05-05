#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;

        vector<int> a(2 * n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i + n] = a[i];
        }

        int index = -1;
        for (int i = 1; i + 1 < 2 * n; i++)
        {
            if (a[i] != a[i - 1] && a[i] != a[i + 1])
            {
                index = i + 1;
                break;
            }
        }

        if (index > n)
            index -= n;

        cout << index << endl;
    }

    return 0;
}