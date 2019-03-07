// https://atcoder.jp/contests/abc120/submissions/4460567
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

class UnionFind {
  public:
    UnionFind(const int N) { Parent = vector<int>(N, -1); }
    int root(const int A) {
      if (Parent[A] < 0) return A;
      return Parent[A] = root(Parent[A]);
    }
    int size(const int A) {
      return -Parent[root(A)];
    }
    bool connect(int A, int B) {
      A = root(A);
      B = root(B);
      if (A == B) {
        return false;
      }
      if (size(A) < size(B)) swap(A, B);
      Parent[A] += Parent[B];
      Parent[B] = A;
      return true;
    }

  private:
    vector<int> Parent;

};

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  REP(i, M) {
    cin >> A[i] >> B[i];
    --A[i];
    --B[i];
  }
  vector<long long> ans(M);
  ans[M - 1] = (long long) N * (N - 1) / 2;
  UnionFind Uni(N);
  for (int i = M - 1; i >= 1; --i) {
    ans[i - 1] = ans[i];
    if (Uni.root(A[i]) != Uni.root(B[i])) {
      ans[i - 1] -= (long long) Uni.size(A[i]) * Uni.size(B[i]);
      Uni.connect(A[i], B[i]);
    }
  }
  REP(i, M) {
    cout << ans[i] << endl;
  }
}
