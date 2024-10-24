#include <iostream>
#include <set>
using namespace std;
using ll = long long;

bool isDistinct(ll y) {
    set<ll> st;
    while (y > 0) {
        st.insert(y % 10);
        y /= 10;
    }
    if (st.size() == 4) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll y;
    cin >> y;
    while (true) if (isDistinct(++y)) {cout << y; break;}
}
