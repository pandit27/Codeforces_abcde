#include <iostream>
#include <string>
#define ll long long
using namespace std;
 
int main() {
    ll t, n;
    cin >> t; // take t
    while (t--) {
        cin >> n; // take n
        if (n % 2 == 0) cout << (n / 2) - 1 << endl;
        else cout << n / 2 << endl;
    }
}