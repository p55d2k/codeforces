#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    bool seencolor = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;

            if (c == 'C' || c == 'M' || c == 'Y')
                seencolor = true;
        }
    }

    if (seencolor)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;

    return 0;
}