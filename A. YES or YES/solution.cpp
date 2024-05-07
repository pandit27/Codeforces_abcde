#include <iostream>
#include <string>
#include <cctype>
#define ll long long
using namespace std;

void solution(string str) {
  for (auto &it : str) it = tolower(it);
  if (str == "yes") cout << "yes" << endl;
  else cout << "no" << endl;
}

int main() {
  ll t;
  cin >> t; // take t
  string str;
  while (t--) {
    cin >> str; // take str
    solution(str);
  }
}

/*
    EXPLANATION :-

    1. convert each string into lowercase

    2. now check if str == "yes"

    3. if true print "yes" else "no"
*/