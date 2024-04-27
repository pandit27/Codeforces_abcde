#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x, ctr = 5, steps = 0;
    cin >> x; // take x
    while (x != 0) {
        if (ctr <= x) {
            x -= ctr; 
            steps++;
        }
        else ctr--;
    }
    cout << steps;
}

/*
    EXPLANATION :-

    1. while x > 0 we'll do x - ctr starting from ctr = 5

    2. if x < ctr then we'll do ctr--

    3. in each true iteration we'll do steps++
*/