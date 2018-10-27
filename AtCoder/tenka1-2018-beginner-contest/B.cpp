#include <iostream>
#include <string>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

pair<int, int> game(int t, int ao) {
  if (t % 2 != 0) {
    --t;
  }
  t /= 2;
  ao += t;
  return make_pair(t, ao);
}

pair<int, int> solve(int a, int b, int k) {
  int t = a, ao = b;
  REP(i, k) {
    if (i % 2 == 0) {
      auto p = game(t, ao);
      t = p.first;
      ao = p.second;
    } else {
      auto p = game(ao, t);
      t = p.second;
      ao = p.first;
    }
  }
  return make_pair(t, ao);
}

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  auto p = solve(a, b, k);
  cout << p.first << " " << p.second << endl;
}
