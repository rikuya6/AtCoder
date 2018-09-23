#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool solve(int X, int Y, vector<int>& x, vector<int>& y) {
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  for (int Z = X + 1; Z <= Y; ++Z) {
    // cout << x.back() << "<" << Z << "<=" << y.front() << endl;
    if (X < Z && Z <= Y && x.back() < Z && y.front() >= Z) return true;
  }
  return false;
}

int main() {
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  vector<int> x(N), y(M);
  REP(i, N) cin >> x[i];
  REP(i, M) cin >> y[i];
  if (solve(X, Y, x, y)) cout << "No War" << endl;
  else cout << "War" << endl;
}
