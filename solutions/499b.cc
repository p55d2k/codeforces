#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> translate;
    for (int i = 0; i < m; i++)
    {
        string lang1, lang2;
        cin >> lang1 >> lang2;

        if (lang1.size() <= lang2.size())
            translate[lang1] = lang2;
        else
            translate[lang2] = lang1;
    }

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        for (auto i = translate.begin(); i != translate.end(); i++)
        {
            if (i->first == word)
            {
                cout << word << " ";
                break;
            }
            else if (i->second == word)
            {
                cout << i->first << " ";
                break;
            }
        }
    }

    cout << endl;

    return 0;
}