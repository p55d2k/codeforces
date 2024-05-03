// time taken to solve: 3:47 min

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    int max_ppl = 0;
    int current_ppl = 0;

    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];

        current_ppl -= a[i];
        current_ppl += b[i];

        if (current_ppl > max_ppl)
            max_ppl = current_ppl;
    }

    cout << max_ppl << endl;

    return 0;
}