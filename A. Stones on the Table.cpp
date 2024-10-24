#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, ctr = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < str.size() - 1; i++) if (str[i] == str[i + 1]) ctr++;
    cout << ctr;
}
