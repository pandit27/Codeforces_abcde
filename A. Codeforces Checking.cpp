#include <iostream>
#include <unordered_set>
#define ll long long
using namespace std;

int main() {
  ll t;
  cin >> t;
  char c;
  string str = "codeforces";
  unordered_set<char> st;
  for (auto it : str) st.insert(it);
  while (t--) {
    cin >> c;
    if (st.count(c) > 0) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}
