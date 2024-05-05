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

    for (int i = 0; i < t; i++)
    {
        vector<int> dist(4);
        cin >> dist[0] >> dist[1] >> dist[2] >> dist[3];
        int a = dist[0];

        sort(dist.begin(), dist.end(), greater<int>());

        int pos = find(dist.begin(), dist.end(), a) - dist.begin();
        cout << pos << endl;
    }

    return 0;
}