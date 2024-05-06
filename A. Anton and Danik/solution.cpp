#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main() {
  ll n, ctr = 0;
  cin >> n; // take n
  string str;
  cin >> str; // take str
  for (auto it : str) if (it == 'A') ctr++;
  if (ctr > (n - ctr)) cout << "Anton";
  else if (ctr < (n - ctr)) cout << "Danik";
  else cout << "Friendship";
}

/*
    EXPLANATION :-

    1. count the number of A's in str 

    2. if A's count > D's count => print Anton

    3. if A's count < D's count => print Danik

    4. if A's count == D's count => print Friendship  
*/