#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main() {
    ll n, ctr = 0;
    cin >> n; // take n
    string str;
    while (n--) {
        cin >> str; // take str
        ctr += countFaces(str);
    }
    cout << ctr;
}

// function to count faces of a polyhedron
int countFaces(string s) {
    if (s == "Tetrahedron") return 4;
    if (s == "Cube") return 6;
    if (s == "Octahedron") return 8;
    if (s == "Dodecahedron") return 12;
    if (s == "Icosahedron") return 20;
}

// this is a better solution without using any external data structure like a vector
// tc = O(n)
// sc = O(1)