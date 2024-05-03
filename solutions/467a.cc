#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p, q;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (q - p >= 2)
            count++;
    }

    cout << count << endl;

    return 0;
}