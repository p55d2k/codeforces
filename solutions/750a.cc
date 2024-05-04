#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    k = 240 - k;

    int cur_problem = 1;
    while (1)
    {
        if (cur_problem - 1 == n)
            break;

        if (k >= cur_problem * 5)
        {
            k -= cur_problem * 5;
            cur_problem++;
        }
        else
            break;
    }

    cout << cur_problem - 1 << endl;

    return 0;
}