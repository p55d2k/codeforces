#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    string c = "";

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            c += "1";
        else
            c += "0";
    }

    cout << c << endl;

    return 0;
}