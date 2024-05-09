#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // take t
    while (t--) {
        int n, ctr = 0;
        vector<int> v;
        cin >> n; // take n
        int digit, divisor = 1;
        while (n != 0) {
            digit = n % 10;
            if (digit != 0) {
                v.push_back(digit * divisor);
                ctr++;
            }
            divisor *= 10;
            n /= 10;
        }
        cout << ctr << endl;
        for (auto it : v) cout << it << " ";
        cout << endl;
    }
}

/*
    EXPLANATION :-

    1. check digits from right and if a digit is not zero then simply print (digit * divisor)
*/