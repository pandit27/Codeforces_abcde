#include <iostream>
#include <string>
#include <set>
using namespace std;
#define ll long long

int main() {
  string s;
  cin >> s; // take s
  set<int> st;
  for (auto it : s) st.insert(it);
  if (st.size() % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}

/*
    EXPLANATION :-

    1. store every character in a set 

    2. now check if the size of the set is even or odd
*/