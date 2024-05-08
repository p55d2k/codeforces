#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string best = "codeforces";

    while (t--)
    {
        string s;
        cin >> s;

        int diff = 0;

        for (int i = 0; i < 10; i++)
        {
            if (s[i] != best[i])
                diff++;
        }

        cout << diff << endl;
    }

    return 0;
}