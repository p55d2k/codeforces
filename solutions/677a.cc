// time taken to solve: 2:02 min

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;

    int w = 0;

    for (int i = 0; i < n; i++)
    {
        int height;
        cin >> height;

        if (height > h)
            w++;

        w++;
    }

    cout << w << endl;

    return 0;
}