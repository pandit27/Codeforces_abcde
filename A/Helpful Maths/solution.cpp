#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  string s;
  cin >> s;
  vector<int> v;
  for (auto it : s) {
    if (it != '+') v.push_back(it - '0');
  }
  sort(v.begin(), v.end());
  string str = "";
  for (int i = 0; i < v.size(); i++) {
    str += to_string(v[i]);
    if (i != v.size() - 1) str += "+";
  }
  cout << str;
}

/*
    EXPLANATION :-

    1. insert every number in the string into a vector

    2. now sort the vector in non-decreasing order

    3. now form a new string using the sorted vector

    4. finally print the new string str  
*/