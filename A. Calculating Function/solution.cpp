// brute force solution
#include <iostream>
using namespace std;

int main() {
    long long n; int ans = 0;
    cin >> n; // take n
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) ans -= i;
        else ans += i;
    }
    cout << ans;
}

/*
    EXPLANATION :-

    1. do alternate plus minus for odd and even numbers respectively
*/