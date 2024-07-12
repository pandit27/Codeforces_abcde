#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
  ll n;
  cin >> n; // take n
  string str;
  while (n--) {
    cin >> str;
    if (str.length() <= 10) {cout << str << endl; continue;}
    else cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
  }
}

/*
    EXPLANATION :-

    1. simple brute force solution
*/