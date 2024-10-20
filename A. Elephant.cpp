#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll x;
    cin >> x;
    ll rem = x % 5, steps_5 = x / 5;
    cout << (steps_5 + rem);
}