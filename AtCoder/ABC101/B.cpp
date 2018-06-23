#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

int s(int n) {
  int ret{};
  while (n) {
    ret += n % 10;
    n /= 10;
  }
  // cout << ret << endl;
  return ret;
}

int main() {
  int n;
  cin >> n;
  if ((n % s(n)) == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
