#include <iostream>
using namespace std;

#define ll long long

ll ceiling(ll n, ll a) {
    if (n % a == 0) {
        return n / a;
    } else {
        return n / a + 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, a;
    cin >> n >> m >> a;
    
    ll w = ceiling(n, a);
    ll l = ceiling(m, a);

    cout << w * l;    
    return 0;
}