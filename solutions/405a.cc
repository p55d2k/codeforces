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
    vector<int> box(n);

    for (int i = 0; i < n; i++)
    {
        cin >> box[i];
    }

    sort(box.begin(), box.end());

    for (int i = 0; i < box.size(); i++)
    {
        cout << box[i] << " ";
    }

    cout << endl;

    return 0;
}