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
        int n, a, b;
        cin >> n >> a >> b;

        string repeat;
        string s;
        for (int i = 0; i < n; i++)
        {
            if (repeat.size() != a)
            {
                if (repeat.size() >= b)
                    repeat += repeat[repeat.size() % b];
                else
                    repeat += (97 + repeat.size());
            }

            s += repeat[i % a];
        }

        cout << s << endl;
    }

    return 0;
}