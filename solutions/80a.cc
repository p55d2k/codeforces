#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    if (!is_prime(m))
    {
        cout << "NO" << endl;
        return 0;
    }

    int cur = n;
    while (1)
    {
        cur++;

        if (!is_prime(cur))
            continue;
        else
            break;
    }

    if (cur == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}