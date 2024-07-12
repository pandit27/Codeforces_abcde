#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, n;
    cin >> n; // take n
    string str;
    while (n--) {
        cin >> str; // take str
        if (str[1] == '+') x++;
        else x--;
    }
    cout << x;
}

// tc = O(n)
// sc = O(1)