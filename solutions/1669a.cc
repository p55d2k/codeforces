#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        if (n >= 1900)
            cout << "Division 1" << endl;
        else if (n >= 1600)
            cout << "Division 2" << endl;
        else if (n >= 1400)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }

    return 0;
}