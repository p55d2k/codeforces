#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string curname;
    map<string, int> names;

    for (int i = 0; i < n; i++)
    {
        cin >> curname;

        if (names.find(curname) != names.end()) // alr inside
        {
            names[curname]++;
            cout << curname << names[curname] << endl;
        }
        else
        {
            names[curname] = 0;
            cout << "OK" << endl;
        }
    }

    return 0;
}