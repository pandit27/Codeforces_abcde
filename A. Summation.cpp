#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, sum = 0, x;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {cin >> x; v.push_back(x);}
    for (const auto &it : v) sum += it;
    if (sum < 0) cout << sum * (-1);
    else cout << sum;
}
