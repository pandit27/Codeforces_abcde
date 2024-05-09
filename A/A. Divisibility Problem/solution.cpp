#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // take t
    while (t--) {
        int a, b;
        cin >> a >> b; // take a & b
        if (a <= b) {cout << b - a; continue;}
        cout << ((a / b) + 1) * b - a;
    }
}

/*
    EXPLANATION :-

    Simple Mathematics

    10 4 
    => if a > b && a % b != 0
    => then print b * ((a / b) + 1) - a

    123 456
    => if a < b 
    => then print b - a

    92 46
    => if a > b && a % b == 0 
    => then print 0
*/