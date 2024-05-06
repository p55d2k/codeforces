#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> prog, math, pe;

    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
            prog.push_back(i + 1);
        else if (type == 2)
            math.push_back(i + 1);
        else
            pe.push_back(i + 1);
    }

    int teams = min({prog.size(), math.size(), pe.size()});
    cout << teams << endl;

    for (int i = 0; i < teams; i++)
    {
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }

    return 0;
}