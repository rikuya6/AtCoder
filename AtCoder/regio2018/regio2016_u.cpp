#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  string s;
  int cnt{};
  cin >> s;
  for (auto e : s) {
    if (e == '(') ++cnt;
    else --cnt;
  }
  cout << ((cnt == 0) ? "Yes" : "No") << endl;
}
