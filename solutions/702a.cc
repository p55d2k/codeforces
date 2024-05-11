#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int maxincreaselen = -1;
    int curincreaselen = 0;
    int prev = -1;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a > prev)
            curincreaselen++;
        else
            curincreaselen = 1;

        maxincreaselen = max(maxincreaselen, curincreaselen);

        prev = a;
    }

    cout << maxincreaselen << endl;

    return 0;
}