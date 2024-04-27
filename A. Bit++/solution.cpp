#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n, x = 0;
    cin >> n; // take n
    while (n--) {
        string statement;
        cin >> statement; // take statement
        for (int i = 0; i < statement.length(); i++) {
            if (statement[i] == '+') {x++; break;}
            if (statement[i] == '-') {x--; break;}
        }
    }
    cout << x;
}

/*
    EXPLANATION :-

    1. check if statement has '+' or '-' & then do increment and decrement accordingly
*/