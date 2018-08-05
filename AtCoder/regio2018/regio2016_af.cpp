#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int sum{};
  for (int i = 0; i < 5; ++i) {
    int a;
    cin >> a;
    sum += a;
  }
  cout << sum / 5.0 << endl;
}
