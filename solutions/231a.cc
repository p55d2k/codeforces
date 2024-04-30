#include <vector>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int qns;
    cin >> qns;

    int implement = 0;
    int temp = 0;

    for (int i = 0; i < qns; i++)
    {
        int count = 0;

        for (int j = 0; j < 3; j++)
        {
            cin >> temp;
            if (temp)
                count++;
        }

        if (count >= 2)
            implement++;
    }

    cout << implement;

    return 0;
}