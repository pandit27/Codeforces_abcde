#include <iostream>
using namespace std;

int main() {
    int a, b, ctr = 0;
    cin >> a >> b; // take a & b
    while (a <= b) a *= 3, b *= 2, ctr++;
    cout << ctr;
}

/*
    EXPLANATION :-

    1. simple mathematics  
*/