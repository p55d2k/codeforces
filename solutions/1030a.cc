#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string out = "EASY";

    for (int i = 0; i < n; i++)
    {
        int opinion;
        cin >> opinion;

        if (opinion == 1)
            out = "HARD";
    }

    cout << out << endl;

    return 0;
}