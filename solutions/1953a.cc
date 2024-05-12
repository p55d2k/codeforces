#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<double> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cout << "{d:";
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            cout << ",";
        cout << i + 1;
    }
    cout << "}" << endl;

    return 0;
}