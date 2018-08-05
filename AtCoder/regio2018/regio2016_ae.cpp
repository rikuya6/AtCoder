#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int sum{};
  for (int i = 0; i < 5; ++i) {
    int a;
    cin >> a;
    if (a % 2 != 0) sum += a;
  }
  cout << sum << endl;
}
