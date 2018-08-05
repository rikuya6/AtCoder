#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
  int max_v = numeric_limits<int>::min();
  for (int i = 0; i < 5; ++i) {
    int a;
    cin >> a;
    max_v = max(max_v, a);
  }
  cout << max_v << endl;
}
