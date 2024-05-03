// time taken to solve: 2:51 min

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string attempt;
    cin >> attempt;

    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    if (reversed == attempt)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}