#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

bool check(int a, int b, int c, int s) {
  if (a + b + c == s) return true;
  if (a + b + c + 1 == s) return true;
  if (a + b + c + 2 == s) return true;
  if (a + b + c + 3 == s) return true;
  return false;
}

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  vector<bool> check(n, false);
  REP(i, m) {
    int l, r;
    cin >> l >> r;
    for (int k = l - 1; k < r; ++k) {
      check[k] = true;
    }
  }
  int sum{};
  REP(i, n) {
    if (check[i]) sum += a;
    else sum += b;
  }
  cout << sum << endl;
}
