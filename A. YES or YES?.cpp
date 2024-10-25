#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
      string str;
      cin >> str;
      for (auto &it : str) it = tolower(it);
      if (str == "yes") cout << "YES\n";
      else cout << "NO\n";
    }
}
