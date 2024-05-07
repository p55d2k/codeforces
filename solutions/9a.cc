#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int larger = a > b ? a : b;

    if (larger == 1)
        cout << "1/1" << endl;
    else if (larger == 2)
        cout << "5/6" << endl;
    else if (larger == 3)
        cout << "2/3" << endl;
    else if (larger == 4)
        cout << "1/2" << endl;
    else if (larger == 5)
        cout << "1/3" << endl;
    else if (larger == 6)
        cout << "1/6" << endl;

    return 0;
}