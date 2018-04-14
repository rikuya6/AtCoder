#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)


int n;
vector<int> x, y;

int main()
{
  cin >> n;
  REP(i, n) {
    int w;
    cin >> w;
    x.push_back(w);
    y.push_back(w);
  }
  sort(y.begin(), y.end());
  // この場合、メジアンになりうるのは2つしかない。
  // xが全体の下半分に属する場合、上半分の一番下
  // xが全体の上半分に属する場合、下半分の一番上
  REP(i, n) {
    if (x[i] < y[n / 2]) {
      cout << y[n / 2] << endl;
    } else {
      cout << y[n / 2 - 1] << endl;
    }
  }
}
