#include <iostream>
#include <map>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> wealth;
    for (size_t i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        wealth[w]++;
    }

    int largest = prev(wealth.end())->first;
    ll s = 0;

    for (auto it = wealth.begin(); it != wealth.end(); it++)
    {
        s += (largest - it->first) * it->second;
    }

    cout << s << endl;

    return 0;
}