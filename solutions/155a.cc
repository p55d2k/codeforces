#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int amazing = 0;
    int worst = 10001;
    int best = -1;
    int cur = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> cur;

        if (cur < worst)
        {
            amazing++;
            worst = cur;
        }

        if (cur > best)
        {
            amazing++;
            best = cur;
        }
    }

    // -2 cos first entry edits both worst and best
    cout << amazing - 2 << endl;

    return 0;
}