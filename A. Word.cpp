#include <iostream>
#include <cctype>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    ll upper_ctr = 0;
    for (auto it : str) if (isupper(it)) upper_ctr++;
    bool flag = false;
    if (str.size() - upper_ctr < upper_ctr) flag = true;
    if (flag) for (auto &it : str) it = toupper(it);
    else for (auto &it : str) it = tolower(it);
    cout << str;
}
