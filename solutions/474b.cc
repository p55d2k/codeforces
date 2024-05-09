#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // use cumulative frequency
    vector<int> piles(n + 1);
    piles[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int worms;
        cin >> worms;
        piles[i] = piles[i - 1] + worms;
    }

    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;

        int left = 1, right = n, pile = 1;
        while (left <= right)
        {
            pile = left + (right - left) / 2;

            if (q <= piles[pile] && q > piles[pile - 1])
                break;
            else if (q > piles[pile])
                left = pile + 1;
            else
                right = pile - 1;
        }

        cout << pile << endl;
    }

    return 0;
}