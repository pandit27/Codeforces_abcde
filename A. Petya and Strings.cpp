#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

int compare_strings(string s, string t) {
  for (int i = 0; i < s.size(); i++) {
    if (s[i] < t[i]) return -1;
    if (s[i] > t[i]) return 1;
  }
  return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s;
    cin >> t;
    for (auto &it : s) it = tolower(it);
    for (auto &it : t) it = tolower(it);
    cout << compare_strings(s, t);
}
