#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x, y, z;
    cin >> x >> y >> z;
    ll maxi, mini;
    maxi = max(x, max(y, z));
    mini = min(x, min(y, z));
    cout << mini << " " << maxi;
}
