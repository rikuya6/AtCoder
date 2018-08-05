#include <iostream>
using namespace std;

int main() {
  int sum{};
  for (int i = 0; i < 3; ++i) {
    int a, b;
    cin >> a >> b;
    sum += a * b;
  }
  cout << sum << endl;
}
