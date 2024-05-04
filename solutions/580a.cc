#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    ll prev = 1e10;
    ll cur;

    int maxlength = 1;
    int length;

    for (int i = 0; i < n; i++)
    {
        cin >> cur;

        if (prev > cur)
            length = 1;
        else
            length++;

        if (length > maxlength)
            maxlength = length;

        prev = cur;
    }

    cout << maxlength << endl;

    return 0;
}