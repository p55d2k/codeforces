#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pi = "31415926535897932384626433832795";

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int correct = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == pi[i])
                correct++;
            else
                break;
        }

        cout << correct << endl;
    }

    return 0;
}