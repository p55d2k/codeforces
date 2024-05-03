// time taken to solve: 3:51 min

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    int a_won = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a_won++;
    }

    double f = n * 1.0;

    if (f / 2 == a_won)
        cout << "Friendship" << endl;
    else if (f / 2 > a_won)
        cout << "Danik" << endl;
    else
        cout << "Anton" << endl;

    return 0;
}