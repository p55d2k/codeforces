#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int largest = (x1 > x2 ? x1 : x2) > x3 ? (x1 > x2 ? x1 : x2) : x3;
    int least_dist = 101;

    for (int i = 1; i <= largest; i++)
    {
        least_dist = min(least_dist,
                         abs(i - x1) + abs(i - x2) + abs(i - x3));
    }

    cout << least_dist << endl;

    return 0;
}