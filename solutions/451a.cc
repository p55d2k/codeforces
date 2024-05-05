#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int count = 0;

    while (n * m)
    {
        n--;
        m--;
        count++;
    }

    if (count % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;

    return 0;
}