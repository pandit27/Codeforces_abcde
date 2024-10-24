#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n, ctr = 0;
    cin >> n;
    while (n > 0) {
        ll rem = (n % 10);
        if (rem == 4 || rem == 7) ctr++;
        n /= 10;
    }
    if (ctr == 4 || ctr == 7) cout << "YES";
    else cout << "NO";
}
