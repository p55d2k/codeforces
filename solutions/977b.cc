#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<string, int> counts;
    for (int i = 0; i < n - 1; i++)
        counts[s.substr(i, 2)]++;

    string most_str;
    int most_occur = -1;
    for (unordered_map<string, int>::iterator it = counts.begin();
         it != counts.end();
         it++)
    {
        if (it->second > most_occur)
        {
            most_occur = it->second;
            most_str = it->first;
        }
    }

    cout << most_str << endl;

    return 0;
}