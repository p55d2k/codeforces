#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string txt;
    cin >> txt;

    char first = toupper(txt.front());
    cout << first;

    for (int i = 1; i < txt.size(); i++)
    {
        cout << txt[i];
    }

    cout << endl;

    return 0;
}