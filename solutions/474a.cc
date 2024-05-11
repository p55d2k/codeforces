#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char dir;
    cin >> dir;
    bool left = dir == 'L';

    string typed;
    cin >> typed;

    string original;
    for (int i = 0; i < typed.size(); i++)
    {
        int pos = keyboard.find(typed[i]);
        if (!left)
            original += keyboard[pos - 1];
        else
            original += keyboard[pos + 1];
    }

    cout << original << endl;

    return 0;
}