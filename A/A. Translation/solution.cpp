#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
  string s, t, temp;
  cin >> s; // take s
  cin >> t; // take t
  int l = 0, r = s.length() - 1;
  while (l < r) swap(s[l], s[r]), l++, r--;
  if (s == t) cout << "YES";
  else cout << "NO";
}

/*
    EXPLANATION :-

    1. reverse string s and check if s == t  
*/