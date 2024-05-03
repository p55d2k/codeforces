#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int coins;
    cin >> coins;

    int total = 0;
    vector<int> coinvals(coins);

    for (int i = 0; i < coins; i++)
    {
        cin >> coinvals[i];
        total += coinvals[i];
    }

    sort(coinvals.begin(), coinvals.end(), greater<int>());

    int sum = 0;
    int cur = 0;

    for (int i = 0; i < coins; i++)
    {
        sum += coinvals[i];
        if (sum > total - sum)
        {
            cur = i + 1;
            break;
        }
    }

    cout << cur << endl;

    return 0;
}