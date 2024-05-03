#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int grps = 0;

    string s;
    string prev = "-1";

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (prev == "-1")
            prev = s;

        if (prev != s)
            grps++;

        prev = s;
    }

    cout << grps + 1 << endl;

    return 0;
}