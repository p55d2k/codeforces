#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            if (i % 4 == 0)
            {
                cout << "#";
                for (int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }
            }
            else
            {
                for (int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }
                cout << "#";
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
                cout << "#";
        }
        cout << endl;
    }

    return 0;
}