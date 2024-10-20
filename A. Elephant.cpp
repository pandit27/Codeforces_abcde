#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll x;
    cin >> x;
    ll steps = x / 5;
    if (x % 5 != 0) cout << steps + 1;
    else cout << steps;
}