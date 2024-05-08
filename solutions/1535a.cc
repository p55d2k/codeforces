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
        vector<int> arr(4);
        vector<int> sorted(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            sorted[i] = arr[i];
        }

        sort(sorted.begin(), sorted.end());

        int firstwinner = arr[0] > arr[1] ? arr[0] : arr[1];
        int secondwinner = arr[2] > arr[3] ? arr[2] : arr[3];

        if ((firstwinner > secondwinner &&
             sorted[2] == secondwinner &&
             sorted[3] == firstwinner) ||
            (secondwinner > firstwinner &&
             sorted[2] == firstwinner &&
             sorted[3] == secondwinner))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}