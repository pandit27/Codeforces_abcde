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

    2. we can also implement this alternate plus minus by introducing a variable sign and then doing alternate plus minus
*/