#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string keyboard;
        cin >> keyboard;

        unordered_map<char, int> pos;
        for (int i = 0; i < 26; i++)
            pos[keyboard[i]] = i;

        string word;
        cin >> word;

        int len = 0;
        for (int i = 1; i < word.size(); i++)
            len += abs(pos[word[i]] - pos[word[i - 1]]);

        cout << len << endl;
    }

    return 0;
}