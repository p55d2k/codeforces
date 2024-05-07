#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<string, int> scores;

    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        scores[t]++;
    }

    string largest_name;
    int largest_score = -1;

    for (map<string, int>::iterator it = scores.begin();
         it != scores.end();
         it++)
    {
        if (it->second > largest_score)
        {
            largest_name = it->first;
            largest_score = it->second;
        }
    }

    cout << largest_name << endl;

    return 0;
}