#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        bool possible = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] == arr[i])
            {
                possible = 0;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}