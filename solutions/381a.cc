#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int s = 0, d = 0;
    bool turn = 1;

    while (cards.size() > 0)
    {
        bool front = cards.front() > cards.back();

        if (turn) // s
            s += (front ? cards.front() : cards.back());
        else // d
            d += (front ? cards.front() : cards.back());

        if (front)
            cards.erase(cards.begin());
        else
            cards.pop_back();

        turn = !turn;
    }

    cout << s << " " << d << endl;

    return 0;
}