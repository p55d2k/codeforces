#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int less = a > b ? b : a;
    cout << less << " ";
    cout << (int)floor((a + b - less * 2) / 2) << endl;

    return 0;
}