#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n < 3) {cout << 0 << endl; continue;}
        ll x = n - 1, y = 1, ctr = 0;
        while (x > y) ctr++, x--, y++;
        cout << ctr << endl;
    }
}