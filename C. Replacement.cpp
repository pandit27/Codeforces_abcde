#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (auto &it : v) {
      if (it > 0) it = 1;
      if (it < 0) it = 2;
    }
    for (const auto &it : v) cout << it << " ";
}
