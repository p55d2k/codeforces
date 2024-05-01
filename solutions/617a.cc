#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;

    int quotient, remainder;
    quotient = x / 5;
    remainder = x % 5;

    if (remainder)
        cout << quotient + 1 << endl;
    else
        cout << quotient << endl;

    return 0;
}