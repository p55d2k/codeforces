#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    int b;
    cin >> a >> b;

    int hours = 0;
    int out = 0;

    while (a > 0)
    {
        a--;
        out++;

        if (out == b)
        {
            out = 0;
            a++;
        }

        hours++;
    }

    cout << hours << endl;

    return 0;
}