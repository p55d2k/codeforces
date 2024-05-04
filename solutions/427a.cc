#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int free = 0;
    int crimes = 0;

    for (int i = 0; i < n; i++)
    {
        int cmd;
        cin >> cmd;

        if (cmd == -1)
        {
            if (free > 0)
                free--;
            else
                crimes++;
        }
        else if (cmd > 0)
            free += cmd;
    }

    cout << crimes << endl;

    return 0;
}