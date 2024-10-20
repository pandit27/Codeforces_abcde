#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll n, digit, odd_sum, even_sum;
    cin >> n;
    digit = (n + 1) / 2;
    odd_sum = digit * digit;
    even_sum = digit * (digit + 1);
    cout << (even_sum - odd_sum);
}