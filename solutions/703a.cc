#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int m = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        int curm, curc;
        cin >> curm >> curc;

        if (curm > curc)
            m++;
        else if (curc > curm)
            c++;
    }

    if (m > c)
        cout << "Mishka" << endl;
    else if (c > m)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}