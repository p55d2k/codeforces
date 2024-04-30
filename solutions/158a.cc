#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> marks(n);
    int benchmark = -1;

    for (int i = 0; i < n; i++)
    {
        int mark;
        cin >> mark;

        if (i + 1 == k)
            benchmark = mark;

        marks[i] = mark;
    }

    int passed = 0;

    for (int mark : marks)
    {
        if (mark > 0 && mark >= benchmark)
            passed++;
    }

    std::cout << passed;

    return 0;
}