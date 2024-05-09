#include <iostream>
#include <algorithm>
#include <vector>
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
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> solved;

        int balloons = 0;
        for (int i = 0; i < n; i++)
        {
            if (find(solved.begin(), solved.end(), s[i]) == solved.end())
            {
                balloons += 2;
                solved.push_back(s[i]);
            }
            else
                balloons++;
        }

        cout << balloons << endl;
    }

    return 0;
}