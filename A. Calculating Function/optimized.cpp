#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // take n
    if (n % 2 == 0) cout << n / 2;
    else cout << (n / 2) - n;
}

/*
    EXPLANATION :-

    let's say the series is: - 1 + 2 - 3 + 4
    here, n = 4
    => (-1+2) + (-3+4)
    => 1 + 1
    => 2
    we can conclude that the sum is n / 2 if n % 2 == 0

    let's say the series is - 1 + 2 - 3 + 4 - 5
    here, n = 5
    => (-1+2) + (-3+4) - 5
    => 1 + 1 - 5
    => 2 - 5
    => -3
    we can conclude that the sum is (n / 2) - n if n % 2 != 0
*/