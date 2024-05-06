#include <iostream>
#include <string>
#include <cctype>
#define ll long long
using namespace std;

int main() {
  string str;
  cin >> str; // take str
  str[0] = toupper(str[0]);
  cout << str;
}

/*
    EXPLANATION :-

    1. just capitalize str[0] and print str  
*/