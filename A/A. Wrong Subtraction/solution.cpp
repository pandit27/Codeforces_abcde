#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k; // take n & k
    while (k--) {
        if (n % 10 != 0) n--;
        else n /= 10;
    }
    cout << n;
}

/*
    EXPLANATION :-

    1. perform wrong subtraction k times on n
*/