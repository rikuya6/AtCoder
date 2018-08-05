#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  int n, sum{};
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    sum += a;
  }
  printf("%d %.1f\n", sum, sum / (double) n);
}
