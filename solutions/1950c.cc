#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int hour = stoi(s.substr(0, 2));
        string min = s.substr(3, 4);

        if (hour == 0)
            cout << "12:" << min << " AM" << endl;
        else if (hour <= 9)
            cout << '0' << hour << ':' << min << " AM" << endl;
        else if (hour <= 11)
            cout << hour << ':' << min << " AM" << endl;
        else if (hour == 12)
            cout << hour << ':' << min << " PM" << endl;
        else if (hour <= 21)
            cout << '0' << hour - 12 << ':' << min << " PM" << endl;
        else
            cout << hour - 12 << ':' << min << " PM" << endl;
    }

    return 0;
}