#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
  string s;
  cin >> s; // take s
  unordered_set<int> st(s.begin(), s.end());
  if (st.size() % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}

// tc = O(n)
// sc = O(1)