#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str, ans = "";
    cin >> str;
    vector<int> v;
    for (const auto &it : str) if (it != '+') v.push_back(it - '0');
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        ans += (v[i] + '0');
        if (i != v.size() - 1) ans += "+";
    }
    cout << ans;
}
