#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int total = 0;
    string cur;
    for (int i = 0; i < n; i++)
    {
        cin >> cur;

        if (cur == "Tetrahedron")
            total += 4;
        else if (cur == "Cube")
            total += 6;
        else if (cur == "Octahedron")
            total += 8;
        else if (cur == "Dodecahedron")
            total += 12;
        else if (cur == "Icosahedron")
            total += 20;
    }

    cout << total << endl;

    return 0;
}