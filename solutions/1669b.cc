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

        unordered_map<int, int> umap;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            umap[x]++;
        }

        int value = -1;
        for (unordered_map<int, int>::iterator it = umap.begin();
             it != umap.end();
             it++)
        {
            if (it->second >= 3)
                value = it->first;
        }

        cout << value << endl;
    }

    return 0;
}