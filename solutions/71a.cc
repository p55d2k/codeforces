#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int amt;

    cin >> amt;
    for (int i = 0; i < amt; i++)
    {
        string word;
        cin >> word;

        int length = word.size();

        if (length <= 10)
        {
            cout << word << endl;
            continue;
        }
        else
        {
            cout << word.front();
            cout << length - 2;
            cout << word.back() << endl;
        }
    }

    return 0;
}