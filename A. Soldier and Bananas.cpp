#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll k, n, w, total_cost, borrow_amount;
    cin >> k >> n >> w;
    total_cost = k * w * (w + 1) / 2;
    borrow_amount = total_cost - n;
    if (borrow_amount < 1) cout << 0;
    else cout << borrow_amount;
}