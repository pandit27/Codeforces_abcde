#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    string str;
    cin >> str;
    if (n < 26) {cout << "NO"; return 0;}
    for (auto &it : str) it = tolower(it);
    vector<bool> v(26, false);
    for (const auto &it : str) v[it - 'a'] = true;
    for (const auto &it : v) if (it == false) {cout << "NO"; return 0;}
    cout << "YES";
}
