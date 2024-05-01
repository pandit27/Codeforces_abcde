#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string s;
  cin >> s; // take s
  int upperCaseCount = 0;
  for (auto it : s) if (isupper(it)) upperCaseCount++;
  if (upperCaseCount * 2 > s.length()) {
    for (auto &it : s) it = toupper(it); 
  }
  else {
    for (auto &it : s) it = tolower(it);
  }
  cout << s;
}

/*
    EXPLANATION :-

    1. count the number of uppercase and then check if it is greater than or smaller than the number of lowercase

    2. if it is > then do toupper() else tolower()
*/

/*
    PROOF :- 2 * u > n

    here, 
    u = uppercase 
    l = lowercase
    n = length of string

    2u > n
    2u > u + l
    2u - u > u + l - u
    u > l

    hence, proved
*/