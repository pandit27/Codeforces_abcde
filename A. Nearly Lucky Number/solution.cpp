#include <iostream>
using namespace std;
#define ll long long
 
int main() {
  ll n, ctr= 0, digit;
  cin >> n; // take n
  while (n > 0) {
    digit = n % 10;
    if (digit == 4 || digit == 7) ctr++;
    n /= 10;
  }
  if (ctr == 4 || ctr == 7) cout << "YES";
  else cout << "NO";
}

/*
    EXPLANATION :-

    1. count the number of digits equal to 4 or 7 in n

    2. now check if ctr == 4 || ctr == 7  
*/