#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum = 0;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }

    cout << (float)sum / n << endl;

    return 0;
}