#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
  int min_v = numeric_limits<int>::max();
  for (int i = 0; i < 5; ++i) {
    int a;
    cin >> a;
    min_v = min(min_v, a);
  }
  cout << min_v << endl;
}
