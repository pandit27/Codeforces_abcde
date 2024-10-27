#include <iostream>
#include <climits>
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
    ll min_i = INT_MAX, min_idx = -1;
    for (int i = 0; i < n; i++) {
      if (v[i] < min_i) min_i = v[i], min_idx = i + 1;
    }
    cout << min_i << " " << min_idx;
}
