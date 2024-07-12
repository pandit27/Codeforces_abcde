#include <iostream>
#include <vector>
using namespace std;

int main() {
    int y;
    cin >> y; // take y
    while (!isDistinct(++y));
    cout << y;
}

// function to check if y is a distinct year
bool isDistinct(int y) {
    vector<bool> v(10, false);
    while (y > 0) {
        if (v[y % 10]) return false;
        v[y % 10] = true;
        y /= 10;
    }
    return true;
}

// better solution without using a set
// tc = O(k) where k = next_distinct_year - y
// sc = O(1)