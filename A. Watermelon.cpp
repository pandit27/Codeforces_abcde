#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll w;
    cin >> w;
    if (w > 2 && w % 2 == 0 && (w - 2) % 2 == 0) cout << "YES";
    else cout << "NO";
}