#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (char i : s)
    {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'Y')
        {
            continue;
        }
        else
        {
            cout << ".";
            if (i >= 'A' && i <= 'Z')
            {
                cout << (char)(i + 32);
            }
            else
            {
                cout << i;
            }
        }
    }

    return 0;
}