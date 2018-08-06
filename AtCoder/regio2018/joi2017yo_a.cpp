#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int a, b, c, d, e;

int solve() {
  int sum{};
  if (a < 0) {
    sum += abs(a) * c;
    sum += d;
    a = 0;
  }
  sum += (b - a) * e;
  return sum;
}

int main() {
  cin >> a >> b >> c >> d >> e;
  cout << solve() << endl;
}
