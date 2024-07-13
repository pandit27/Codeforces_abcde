#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    int count[10] = {0};
    for (auto it : str) if (it != '+') count[it - '0']++;
    bool flag = false;
    for (int i = 0; i < 10; i++) {
        while (count[i]--) {
            if (flag) cout << "+";
            cout << i;
            flag = true; 
        }
    }
}

// optimized code without sorting
// tc = O(n)
// sc = O(1)