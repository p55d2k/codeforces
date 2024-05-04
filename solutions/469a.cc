#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> pass;
    int n, p, q;
    cin >> n;

    int temp;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> temp;
        pass.insert(temp);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        pass.insert(temp);
    }

    for (int i = 1; i <= n; i++)
    {
        if (find(pass.begin(), pass.end(), i) == pass.end())
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}