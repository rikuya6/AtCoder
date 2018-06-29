#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

void solve(const int n, const int q) {
}

int main() {
  int h1, w1, h2, w2;
  cin >> h1 >> w1 >> h2 >> w2;
  if (h1 == h2 || h1 == w2 || h2 == w1 || w1 == w2)  {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
