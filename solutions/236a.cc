#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<char> seen;
    int amt;

    for (char i : s)
    {
        if (find(seen.begin(), seen.end(), i) == seen.end())
        {
            seen.push_back(i);
            amt++;
        }
    }

    if (amt % 2 == 0)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    cout << endl;

    return 0;
}