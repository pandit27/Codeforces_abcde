#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, x;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> x;
    for (int i = 0; i < n; i++) if (v[i] == x) {cout << i; return 0;}
    cout << -1;
}
