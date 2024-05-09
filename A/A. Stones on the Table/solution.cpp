#include <iostream>
#include <string>
using namespace std;
#define ll long long

int main() {
  ll n, ctr = 0; 
  cin >> n; // take n
  string s;
  cin >> s; // take s
  char clr = s[0];
  for (int i = 1; i < s.length(); i++) {
    if (s[i] == clr) ctr++;
    clr = s[i];
  }
  cout << ctr;
}

/*
    EXPLANATION :-

    1. if s[i] == s[i + 1], do ctr++;
*/