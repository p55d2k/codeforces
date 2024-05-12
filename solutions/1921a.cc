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
        int bigx = -1001,
            smallx = -1001,
            bigy = -1001,
            smally = -1001;

        for (int i = 0; i < 4; i++)
        {
            int x, y;
            cin >> x >> y;

            if (x > bigx)
            {
                smallx = bigx;
                bigx = x;
            }
            else if (x < bigx)
                smallx = x;

            if (y > bigy)
            {
                smally = bigy;
                bigy = y;
            }
            else if (y < bigy)
                smally = y;
        }

        cout << (bigx - smallx) * (bigy - smally) << endl;
    }

    return 0;
}