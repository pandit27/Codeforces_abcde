#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ll t, n;
    cin >> t;
    vector<ll> v;
    while (t--) {
       cin >> n;
       ll power = 1;
       while (n > 0) {
           ll rem = (n % 10);
           if (rem != 0) v.push_back(rem * power);
           power *= 10;
           n /= 10;
       }
       cout << v.size() << endl;
       for (auto it : v) cout << it << " ";
       cout << endl;
       v.clear();
    }
}