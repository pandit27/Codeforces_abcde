#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isDistinct(int y) {
  set<int> st;
  int temp = y, digit, ctr = 0;
  while (temp > 0) {
    digit = temp % 10;
    st.insert(digit);
    temp /= 10;
    ctr++;
  }
  if (st.size() == ctr) return true;
  return false;
}

int getBeautifulYear(int y) {
  while (!isDistinct(++y));
  return y;
}

int main() {
  int y;
  cin >> y; // take y
  cout << getBeautifulYear(y);
}

/*
    EXPLANATION :-

    1. do ++y while y is not a beautiful year  
*/