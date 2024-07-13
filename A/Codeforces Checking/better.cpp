#include <iostream>
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    string str = "codeforces";
    char ch;
    cin >> t; // take t
    while (t--) {
        cin >> ch; // take ch
        for (auto it : str) if (ch == it) {cout << "yes\n"; continue;}
        cout << "false\n";
    }
}

// better solution without using a hashmap