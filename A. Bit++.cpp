#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ll n, x = 0;
    cin >> n;
    string str;
    while (n--) {
      cin >> str;
      if (str[1] == '+') x++;
      else x--;
    }
    cout << x;
}