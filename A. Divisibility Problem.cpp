#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll t, a, b;
    cin >> t;
    while (t--) {
      cin >> a >> b;
      if (a < b) cout << (b - a) << endl;
      else if (a % b == 0) cout << 0 << endl;
      else cout << b - (a % b) << endl;
    }
}