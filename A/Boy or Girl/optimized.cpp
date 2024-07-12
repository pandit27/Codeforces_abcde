#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s;
  cin >> s; // take s
  if (isGirl(s)) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}

// function to check if the person is a girl
bool isGirl(string s) {
    vector<bool> v(26, false);
    for (auto it : s) v[it - 'a'] = true;
    int ctr = 0;
    for (auto it : v) if (it) ctr++;
    if (ctr % 2 == 0) return true;
    return false;
}