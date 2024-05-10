#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int day = 1;
    while (n > 1)
    {
        n--;
        day++;

        if (day % m == 0)
            n++;
    }

    cout << day << endl;

    return 0;
}