#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w; // take w
    if (w > 2 && w % 2 == 0 && (w - 2) % 2 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}

/* 
    EXPLANATION :-

    1. we have to divide w into x & y such that both are even

    2. x & y cannot be even if w <= 2

    3. then we'll check if w is even

    4. now we'll check if (w - 2) is even coz we have to check even seperately for both x & y
*/