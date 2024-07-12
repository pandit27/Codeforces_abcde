#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int compare_strings(string x, string y) {
  for (auto &it : x) it = tolower(it);
  for (auto &it : y) it = tolower(it);
  for (int i = 0; i < x.size(); i++) {
    if (x[i] < y[i]) return -1;
    if (x[i] > y[i]) return 1;
  }
  return 0;
}

int main() {
  string x, y;
  cin >> x; // take x
  cin >> y; // take y
  cout << compare_strings(x, y);
}

/*
    EXPLANATION :-

    1. first convert each characters of strings x & y into lowercase

    2. if x > y, print 1

    3. if x < y, print -1

    4. if x == y, print 0
*/