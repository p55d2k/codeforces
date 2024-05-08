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

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int smallestdiff = 1001;
        for (int i = 1; i < n; i++)
        {
            int diff = abs(arr[i - 1] - arr[i]);
            if (diff < smallestdiff)
                smallestdiff = diff;
        }

        cout << smallestdiff << endl;
    }

    return 0;
}
