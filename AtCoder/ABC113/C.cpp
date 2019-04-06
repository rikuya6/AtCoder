// 解説参照

#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

using ll = long long;

int N, M;
int P[100000], Y[100000];
vector<int> yd[100001];

int main() {
  cin >> N >> M;
  REP(i, M) {
    cin >> P[i] >> Y[i];
    yd[P[i]].push_back(Y[i]);
  }
  REP(i, N)
    sort(yd[i + 1].begin(), yd[i + 1].end());
  REP(i, M)
    printf("%012lld\n", ll(P[i]) * 1000000 + int(lower_bound(yd[P[i]].begin(), yd[P[i]].end(), Y[i]) - yd[P[i]].begin()) + 1);
}
