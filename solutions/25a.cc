#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool generallyeven;
    int even = 0;
    int odd = 0;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        
        if (nums[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    generallyeven = even > odd;

    for (int i = 0; i < n; i++)
    {
        if ((generallyeven && nums[i] % 2 == 1) ||
            (!generallyeven && nums[i] % 2 == 0))
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}