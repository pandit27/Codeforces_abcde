#include <iostream>
#include <unordered_set>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    unordered_set<ll> st = {a, b, c, d};
    cout << (4 - st.size());
}
