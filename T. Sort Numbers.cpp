#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    ll x, y, z;
    x = min(a, min(b, c));
    z = max(a, max(b, c));
    y = (a + b + c) - (x + z);
    for (auto it : {x, y, z}) cout << it << endl;
    cout << endl;
    for (auto it : {a, b, c}) cout << it << endl;
}
