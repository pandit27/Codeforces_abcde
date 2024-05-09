#include <iostream>
using namespace std;

int main() {
    int k, n, w, t_dollar = 1;
    cin >> k >> n >> w; // take k, n & w
    t_dollar = k * w * (w + 1) / 2;
    cout << max(0, t_dollar - n);
}

/*
    EXPLANATION :-

    1. total cost required => k * 2k * 3k * ... * wk => k (1 + 2 + 3 + ... + w)  => k * w * (w + 1) / 2

    2. now we have to check if t_dollar - n is either postive or (0 or negative)

    3. t_dollar - n is +ve it means that we need to borrow money & if it is 0 or -ve then it means that we already have enough amount so no need to borrow mone
*/