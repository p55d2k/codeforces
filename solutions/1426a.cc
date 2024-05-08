#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n >= 1 && n <= 2)
        {
            cout << 1 << endl;
            continue;
        }

        int floor = 2;

        while (1)
        {
            if (n >= ((floor - 2) * x + 3) &&
                n <= ((floor - 1) * x + 2))
            {
                cout << floor << endl;
                break;
            }
            floor++;
        }
    }

    return 0;
}