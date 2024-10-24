#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        if (str.size() <= 10) {cout << str << endl; continue;}
        else {
        string ans = "";
            ans += str[0];
            ans += to_string(str.size() - 2);
            ans += str[str.size() - 1];
            cout << ans << endl;
        }
    }
}
