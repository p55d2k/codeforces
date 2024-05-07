#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int _ = 0; _ < t; _++)
    {
        int n;
        cin >> n;

        if (n % 4 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> even;
        vector<int> odd;

        even.clear();
        odd.clear();

        int cur = 2;
        while (even.size() != n / 2)
        {
            even.push_back(cur);
            cur += 2;
        }

        cur = 1;
        while (odd.size() != ((n / 2) - 1))
        {
            odd.push_back(cur);
            cur += 2;
        }

        odd.push_back(accumulate(even.begin(), even.end(), 0) - accumulate(odd.begin(), odd.end(), 0));

        cout << "YES" << endl;

        for (int i : even)
        {
            cout << i << " ";
        }

        for (int i : odd)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}