#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

int solution(vector<string> str) {
  ll ctr = 0;
  for (auto it : str) {
    if (it == "Tetrahedron") ctr += 4;
    if (it == "Cube") ctr += 6;
    if (it == "Octahedron") ctr += 8;
    if (it == "Dodecahedron") ctr += 12;
    if (it == "Icosahedron") ctr += 20;
  }
  return ctr;
}

int main() {
  ll n;
  cin >> n;
  vector<string> v;
  string str;
  while (n--) {
    cin >> str;
    v.push_back(str);
  }
  cout << solution(v);
}
