#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;

int main() {
  int max_v = numeric_limits<int>::min();
  int min_v = numeric_limits<int>::max();
  for (int i = 0; i < 5; ++i) {
    int a;
    cin >> a;
    max_v = max(max_v, a);
    min_v = min(min_v, a);
  }
  cout << max_v << endl;
  cout << min_v << endl;
}
