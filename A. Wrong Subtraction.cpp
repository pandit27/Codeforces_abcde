#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 10 != 0) n--;
        else n /= 10;
    }
    cout << n;
}
