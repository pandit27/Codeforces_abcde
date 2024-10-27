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
    ll l = 0, r = n - 1;
    while (l < r) {
      if (v[l] != v[r]) {cout << "NO"; return 0;}
      l++, r--;
    }
    cout << "YES";
}
