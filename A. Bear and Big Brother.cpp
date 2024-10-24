#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ll a, b, ctr = 0;
    cin >> a >> b;
    while (a <= b) a *= 3, b *= 2, ctr++;
    cout << ctr;
}
