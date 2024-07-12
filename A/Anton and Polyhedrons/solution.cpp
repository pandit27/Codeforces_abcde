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
  cin >> n; // take n
  vector<string> v;
  string str;
  while (n--) {
    cin >> str; // take str
    v.push_back(str);
  }
  cout << solution(v);
}

/*
    EXPLANATION :-

    1. create a vector v of type string 

    2. push all the strings in vector v

    3. now check for each string and do ctr += x, where x is the no. of faces according to the polyhedron

    4. print ctr
*/