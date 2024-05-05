#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> x(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    cout << x.back() - x[0] << " "
         << x.back() - x[1] << " "
         << x.back() - x[2] << " " << endl;

    return 0;
}