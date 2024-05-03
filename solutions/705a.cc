#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            if ((i + 1) % 2 == 0)
                cout << "I love it";
            else
                cout << "I hate it";
        }
        else
        {
            if ((i + 1) % 2 == 0)
                cout << "I love that ";
            else
                cout << "I hate that ";
        }
    }

    cout << endl;

    return 0;
}