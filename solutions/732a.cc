#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++)
    {
        if ((i * k) % 10 == 0 || (i * k) % 10 == r)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}