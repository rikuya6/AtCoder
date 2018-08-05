#include <iostream>
using namespace std;

int main() {
  int sum{};
  for (int i = 0; i < 5; ++i) {
    int a;
    cin >> a;
    if (a < 40) a = 40;
    sum += a;
  }
  cout << sum / 5.0 << endl;
}
