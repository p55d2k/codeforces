#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    const int finalh = 23;
    const int finalm = 60;

    while (t--)
    {
        int h, m;
        cin >> h >> m;

        cout << (finalh - h) * 60 + (finalm - m) << endl;
    }

    return 0;
}