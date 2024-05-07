#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int pressed = 10 * stoi(to_string(x).substr(0, 1)) - 10;

        if (x < 10)
            pressed += 1;
        else if (x < 100)
            pressed += 3;
        else if (x < 1000)
            pressed += 6;
        else if (x < 10000)
            pressed += 10;

        cout << pressed << endl;
    }

    return 0;
}