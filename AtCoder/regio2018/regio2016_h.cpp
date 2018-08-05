#include <iostream>
#include <algorithm>
using namespace std;

int to_room_number(int n) {
  int num = 0, mul = 1;
  while (n > 0) {
    int d = n % 8;
    if (d >= 4) ++d;
    num += d * mul;
    // cout << d << endl;
    // cout << num << endl;
    mul *= 10;
    n /= 8;
  }
  return num;
}

int solve(const int n) {
  return to_room_number(n);
}

int main() {
  int n;
  cin >> n;
  // for (int n = 1; n < 100; n++)
  cout << solve(n) << endl;
}
