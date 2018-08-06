#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int sum[200000];  // 累積和
  sum[0] = 0;
  int a;
  for (int i = 0; i < n; i++) {
    cin >> a;
    sum[i + 1] = sum[i] + a;
  }
  int max = numeric_limits<int>::min();
  for (int i = k; i < n + 1; i++) {
    max = std::max(max, sum[i] - sum[i - k]);
  }
  cout << max << endl;
}
