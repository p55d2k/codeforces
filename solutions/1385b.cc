#include <bits/stdc++.h>
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

        vector<int> seen;
        for (int i = 0; i < n * 2; i++)
        {
            int a;
            cin >> a;

            if (find(seen.begin(), seen.end(), a) == seen.end())
                seen.push_back(a);
        }

        for (int i = 0; i < n; i++)
            cout << seen[i] << " ";
        cout << endl;
    }

    return 0;
}