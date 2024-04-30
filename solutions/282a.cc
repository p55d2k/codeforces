#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cmds;
    cin >> cmds;

    int x = 0;

    for (int i = 0; i < cmds; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd.find('X') == string::npos)
            continue;

        if (cmd.find('++') != string::npos)
            x++;
        if (cmd.find('--') != string::npos)
            x--;
    }

    cout << x;

    return 0;
}