#include <iostream>
using namespace std;

int highest_power_2(int n)
{
    int res = 0;
    for (int i = n; i >= 1; i--)
    {
        if ((i & (i - 1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    int amt = 0;
    while (highest_power_2(x) >= 1)
    {
        x -= highest_power_2(x);
        amt++;
    }

    cout << amt << endl;

    return 0;
}