#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // kl ml of drink
    int kl = k * l;
    // cd slices of limes
    int cd = c * d;
    // p grams of salt

    int toasts = 0;
    while (1)
    {
        if (kl >= nl && cd >= 1 && p >= np)
        {
            toasts++;
            kl -= nl;
            cd--;
            p -= np;
        }
        else
            break;
    }

    cout << toasts / n << endl;

    return 0;
}