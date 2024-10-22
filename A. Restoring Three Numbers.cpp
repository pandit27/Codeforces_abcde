#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
  ll x;
  vector<ll> v(4);
  for (int i = 0; i < 4; i++) cin >> v[i];
  sort(v.begin(), v.end());
  for (int i = 0; i < 3; i++) cout << (v[3] - v[i]) << " ";
}