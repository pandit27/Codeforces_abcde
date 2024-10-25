#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s;
    cin >> t;
    ll l = 0, r = s.size() - 1;
    while (l < r) {
      swap(s[l], s[r]);
      l++, r--;
    }
    cout << ((s == t) ? "YES" : "NO");
}
