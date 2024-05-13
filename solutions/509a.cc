#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> table(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0)
                table[i][j] = 1;
            else
                table[i][j] = table[i][j - 1] + table[i - 1][j];
        }
    }

    cout << table[n - 1][n - 1] << endl;

    return 0;
}