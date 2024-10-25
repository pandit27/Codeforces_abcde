#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, anton_wins = 0;
    cin >> n;
    string str;
    cin >> str;
    for (const auto &it : str) if (it == 'A') anton_wins++;
    if ((n - anton_wins) < anton_wins) cout << "Anton";
    else if ((n - anton_wins) > anton_wins) cout << "Danik";
    else cout << "Friendship";
}
