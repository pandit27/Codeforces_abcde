#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, x, y, z, ctr = 0;
    cin >> n;
    while (n--) {
        cin >> x >> y >> z;
        if (x + y + z >= 2) ctr++;
    }
    cout << ctr;
}
