#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4; // take input
    vector<int> v = {x1, x2, x3, x4};
    sort(v.begin(), v.end());
    cout << v[3] - v[2] << " " << v[3] - v[1] << " " << v[3] - v[0];
}

/*
    EXPLANATION :-

    1. store all the numbers in a vector v and then sort it

    2. now we have (a + b + c) at the last index i.e. v[3]

    3. now print v[3] - v[i] from i = 0 to i = 2
*/