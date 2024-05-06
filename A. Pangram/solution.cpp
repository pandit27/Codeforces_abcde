#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n; // take n
  string str;
  cin >> str; // take str
  set<char> st;
  for (auto it : str) st.insert(tolower(it));
  if (st.size() == 26) cout << "YES";
  else cout << "NO";
}

/*
    EXPLANATION :-

    1. use a set to store each charachter of the string str into the set

    2. also make sure to insert each charachter in either lowercase or uppercase

    3. now check if st.size() == 26

    4. if true print YES else NO
*/