#include <iostream>
#define ll long long
using namespace std;

int main() {
  ll n, x, y, z, one_cnt = 0, ctr = 0;
  cin >> n; // take n
  while (n--) {
    cin >> x >> y >> z; // take x, y & z
    one_cnt = (x == 1) + (y == 1) + (z == 1);
    if (one_cnt >= 2) ctr++;
  }
  cout << ctr;
}

/*
    EXPLANATION :-

    1. count the number of ones in each input

    2. do ctr++ if one_ctr >= 2
*/