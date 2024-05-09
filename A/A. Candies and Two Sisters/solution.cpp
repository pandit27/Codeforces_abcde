// brute force solution 
// time limit exceeded on test 2
#include <iostream>
using namespace std;
 
int main() {
    int t, n, ctr, x, y;
    cin >> t; // take t
    while (t--) {
        cin >> n; // take n
        if (n <= 2) {cout << 0 << endl; continue;}
        x = n - 1, y = 1, ctr = 0;
        while (x > y) x--, y++, ctr++;
        cout << ctr << endl;
    }
}


/*
    EXPLANATION :-

    1. count the number of ways using loop so that a > b & a + b == n
*/