#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> seen;
        bool teacher_sus = false;
        char cur;

        for (int i = 0; i < n; i++)
        {
            if (find(seen.begin(), seen.end(), s[i]) == seen.end())
            {
                cur = s[i];
                seen.push_back(s[i]);
            }
            else // seen alr
            {
                // no longer in same task but its seen b4 -> distracted
                if (cur != s[i])
                {
                    teacher_sus = true;
                    break;
                }
            }
        }

        if (teacher_sus)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}